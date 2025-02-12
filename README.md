# ROS2 Turtle Follow

## Kullanım Talimatları

1. İlk olarak, aşağıdaki komutları ayrı terminallere yazarak ilk olarak turtlesim_node düğümünü, TurtleCreate ve TurtleFollow servislerini başlatın:
    ```sh
    ros2 run turtlesim turtlesim_node
    ros2 run turtle_control server
    ros2 run turtle_control followServer
    ```

2. Daha sonra, aşağıdaki komutu kullanarak istediğiniz turtlebot sayısını belirterek istemciyi başlatın:
    ```sh
    ros2 run turtle_control client <turtlebot_sayisi>
    ```

3. Şimdi, aşağıdaki komutu kullanarak takip istemcisini başlatın. Program bir input isteyecek, buraya lider olmasını istediğiniz robotun adını yazın:
    ```sh
    ros2 run turtle_control followClient
    ```

4. Son olarak, aşağıdaki komutu terminale yazarak klavye üzerinden seçtiğiniz lider turtle'ı kontrol edin (`turtle4` kısmına lider olarak seçtiğiniz turtle'ın adını yazın):
    ```sh
    ros2 run teleop_twist_keyboard teleop_twist_keyboard cmd_vel:=/turtle4/cmd_vel
    ```
