
namespace Interop\Queue;

use Interop\Queue\Context;

interface ConnectionFactory
{
    public function createContext() -> <Context>;
}