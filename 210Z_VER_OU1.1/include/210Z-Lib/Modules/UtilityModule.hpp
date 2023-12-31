#include "iostream"

namespace Eclipse{
    namespace utility { // util
        int sgn(double num);
        double clamp(double num, double min, double max);
        void stop();
        void stop_v();
        void leftvelreq(int velocity);
        void rightvelreq(int velocity);
        void leftvoltagereq(double voltage);
        void rightvoltagereq(double voltage);
        void fullreset(double resetval, bool imu);
        double get_x();
        double get_y();
        void set_x(double x);
        void set_y(double y);
        double get_min_angle_error(float angle1, float angle2, bool radians);
        double get_angular_error(double target_x, double target_y);
        double get_distance_error(double d_target_x, double d_target_y);
        double getAngleError(double target_x, double target_y, bool reverse);
        double getDistanceError(double target_x, double target_y);
        bool is_reversed(int value);
        void engage_left_motors(double voltage);
        void engage_right_motors(double voltage);
        void engage_velocity_left_motors(double velocity);
        void engage_velocity_right_motors(double velocity);
        void motor_deactivation();
        void restart_all_chassis_motors(bool imu_reset);
        double get_encoder_position();
        void set_chassis_to_brake();
        double get_curvature(double reference_x, double reference_y, double reference_theta, double other_x, double other_y, double other_theta);
        void overRideCoordinatePos(double new_gx, double new_gy);
    }
}
