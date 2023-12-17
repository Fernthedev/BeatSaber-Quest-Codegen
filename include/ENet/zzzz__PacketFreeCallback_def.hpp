#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PacketFreeCallback)
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Object;
}
namespace ENet {
struct Packet;
}
// Forward declare root types
namespace ENet {
class PacketFreeCallback;
}
// Write type traits
MARK_REF_PTR_T(::ENet::PacketFreeCallback);
// Type: ENet::PacketFreeCallback
namespace ENet {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15224))
// CS Name: ::ENet::PacketFreeCallback*
class CORDL_TYPE PacketFreeCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::ENet::PacketFreeCallback* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x21ef0a0 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x21ef164 size 0x14 virtual true final false
inline void Invoke(::ENet::Packet  packet) ;

/// @brief Method BeginInvoke addr 0x21ef178 size 0x84 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::ENet::Packet  packet, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x21ef1fc size 0xc virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "PacketFreeCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PacketFreeCallback(PacketFreeCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PacketFreeCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PacketFreeCallback(PacketFreeCallback const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PacketFreeCallback()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::PacketFreeCallback, 0x80>, "Size mismatch!");

} // namespace end def ENet
NEED_NO_BOX(::ENet::PacketFreeCallback);
DEFINE_IL2CPP_ARG_TYPE(::ENet::PacketFreeCallback*, "ENet", "PacketFreeCallback");
