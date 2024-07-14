<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title></title>
</head>
<body>
    <table border="5">
    <?php
        for($i=1;$i<=4;$i++)
        {
            if ($i%2==0)
                $x=1;
            else
                $x=0;
    ?>
    <tr>
        <?php
            for($i=1;$i<=10;$i++)
            {
                if($x==0)
                {
        ?>
        <td bgcolor="yellow">
            ram
        </td>
        <?php
                }
       else{
        ?>
        <td bgcolor="white">
            sita
        </td>
        <?php
                }
                $x=!$x;
            }
        ?>
    </tr>
    <?php
        }
    ?>
    </table>
</body>
</html>