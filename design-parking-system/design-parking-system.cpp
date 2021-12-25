class ParkingSystem {
public:
    vector<int>count;
    ParkingSystem(int big, int medium, int small) {
        count.push_back(big);
        count.push_back(medium);
        count.push_back(small);
        
    }
    
    bool addCar(int cartype) {
        if(cartype==1){
            return count[0]-- >0;
        }
        else if(cartype==2){
            return count[1]-- >0;
        }
        else{
            return count[2]-- >0;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */