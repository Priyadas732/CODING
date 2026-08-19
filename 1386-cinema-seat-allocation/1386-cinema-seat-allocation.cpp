class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        // Sort to group all reservations for the same row together
        sort(begin(reservedSeats), end(reservedSeats));
        
        int cnt = 0;
        int i = 0;
        int m = reservedSeats.size();
        int rowsWithReservations = 0;
        
        while(i < m) {
            int currentRow = reservedSeats[i][0];
            
            bool first = true;  // Seats 2-5
            bool second = true; // Seats 4-7
            bool third = true;  // Seats 6-9
            
            // Inner while loop: process all reserved seats in the CURRENT row
            while(i < m && reservedSeats[i][0] == currentRow) {
                int seat = reservedSeats[i][1];
                
                if(seat >= 2 && seat <= 5) first = false;
                if(seat >= 4 && seat <= 7) second = false;
                if(seat >= 6 && seat <= 9) third = false;
                
                i++; // Move to the next reservation in the list
            }
            
            // After the inner loop, the row has changed. Now we calculate the families for 'currentRow'
            if(first == true && third == true) {
                cnt += 2;
            } 
            else if(first == true || second == true || third == true) {
                cnt += 1;
            }
            
            rowsWithReservations++;
        }
        
        // Rows that are completely empty can fit 2 families each
        int emptyRows = n - rowsWithReservations;
        cnt += (emptyRows * 2);
        
        return cnt;
    }
};