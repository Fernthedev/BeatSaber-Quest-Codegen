#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Callbacks)
namespace ENet {
struct ENetCallbacks;
}
namespace ENet {
class NoMemoryCallback;
}
namespace ENet {
class FreeCallback;
}
namespace ENet {
class AllocCallback;
}
// Forward declare root types
namespace ENet {
class Callbacks;
}
// Write type traits
MARK_REF_PTR_T(::ENet::Callbacks);
// Type: ENet::Callbacks
namespace ENet {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15231))
// CS Name: ::ENet::Callbacks*
class CORDL_TYPE Callbacks : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field nativeCallbacks offset 0x10
 __declspec(property(get=__get_nativeCallbacks, put=__set_nativeCallbacks)) ::ENet::ENetCallbacks  nativeCallbacks;

 __declspec(property(get=get_NativeData, put=set_NativeData)) ::ENet::ENetCallbacks  NativeData;

constexpr void __set_nativeCallbacks(::ENet::ENetCallbacks  value) ;

constexpr ::ENet::ENetCallbacks& __get_nativeCallbacks() ;

constexpr ::ENet::ENetCallbacks const& __get_nativeCallbacks() const;

/// @brief Method get_NativeData addr 0x21efe4c size 0x14 virtual false final false
inline ::ENet::ENetCallbacks get_NativeData() ;

/// @brief Method set_NativeData addr 0x21efe60 size 0x14 virtual false final false
inline void set_NativeData(::ENet::ENetCallbacks  value) ;

static inline ::ENet::Callbacks* New_ctor(::ENet::AllocCallback*  allocCallback, ::ENet::FreeCallback*  freeCallback, ::ENet::NoMemoryCallback*  noMemoryCallback) ;

/// @brief Method .ctor addr 0x21efe74 size 0x3c virtual false final false
inline void _ctor(::ENet::AllocCallback*  allocCallback, ::ENet::FreeCallback*  freeCallback, ::ENet::NoMemoryCallback*  noMemoryCallback) ;

// Ctor Parameters [CppParam { name: "", ty: "Callbacks", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Callbacks(Callbacks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Callbacks", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Callbacks(Callbacks const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Callbacks()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::Callbacks, 0x28>, "Size mismatch!");

} // namespace end def ENet
NEED_NO_BOX(::ENet::Callbacks);
DEFINE_IL2CPP_ARG_TYPE(::ENet::Callbacks*, "ENet", "Callbacks");
