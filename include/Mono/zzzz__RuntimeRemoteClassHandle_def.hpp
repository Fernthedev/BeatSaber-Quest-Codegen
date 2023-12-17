#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RuntimeRemoteClassHandle)
namespace Mono {
struct RuntimeClassHandle;
}
namespace Mono {
struct __RuntimeStructs__RemoteClass;
}
// Forward declare root types
namespace Mono {
struct RuntimeRemoteClassHandle;
}
// Write type traits
MARK_VAL_T(::Mono::RuntimeRemoteClassHandle);
// Type: Mono::RuntimeRemoteClassHandle
namespace Mono {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2229))
// CS Name: ::Mono::RuntimeRemoteClassHandle
struct CORDL_TYPE RuntimeRemoteClassHandle : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value offset 0x0
 __declspec(property(get=__get_value, put=__set_value)) ::cordl_internals::Ptr<::Mono::__RuntimeStructs__RemoteClass>  value;

 __declspec(property(get=get_ProxyClass)) ::Mono::RuntimeClassHandle  ProxyClass;

constexpr void __set_value(::cordl_internals::Ptr<::Mono::__RuntimeStructs__RemoteClass>  value) ;

constexpr ::cordl_internals::Ptr<::Mono::__RuntimeStructs__RemoteClass>& __get_value() ;

constexpr ::cordl_internals::Ptr<::Mono::__RuntimeStructs__RemoteClass> const& __get_value() const;

/// @brief Method get_ProxyClass addr 0x241265c size 0x1c virtual false final false
inline ::Mono::RuntimeClassHandle get_ProxyClass() ;

// Ctor Parameters [CppParam { name: "value", ty: "::cordl_internals::Ptr<::Mono::__RuntimeStructs__RemoteClass>", modifiers: "", def_value: None }]
constexpr RuntimeRemoteClassHandle(::cordl_internals::Ptr<::Mono::__RuntimeStructs__RemoteClass>  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RuntimeRemoteClassHandle(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RuntimeRemoteClassHandle()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::RuntimeRemoteClassHandle, 0x8>, "Size mismatch!");

} // namespace end def Mono
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeRemoteClassHandle, "Mono", "RuntimeRemoteClassHandle");
