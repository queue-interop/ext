
namespace Interop\Queue\Exception;

use Throwable;

class DeliveryDelayNotSupportedException extends Exception
{
    /**
     * @param int $code
     * @param \Throwable $previous
     *
     * @return static
     */
    public static function providerDoestNotSupportIt(int code = 0, <Throwable> previous = null) -> <DeliveryDelayNotSupportedException>
    {
        return new DeliveryDelayNotSupportedException(
            "The provider does not support delivery delay feature",
            code,
            previous
        );
    }
}