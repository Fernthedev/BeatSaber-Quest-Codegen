#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeGenericParamInfoHandle)
namespace System::Reflection {
struct GenericParameterAttributes;
}
namespace Mono {
struct __RuntimeStructs__GenericParamInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Mono {
struct RuntimeGenericParamInfoHandle;
}
// Write type traits
MARK_VAL_T(::Mono::RuntimeGenericParamInfoHandle);
// Type: Mono::RuntimeGenericParamInfoHandle
namespace Mono {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2230))
// CS Name: ::Mono::RuntimeGenericParamInfoHandle
struct CORDL_TYPE RuntimeGenericParamInfoHandle : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value offset 0x0
 __declspec(property(get=__get_value, put=__set_value)) ::cordl_internals::Ptr<::Mono::__RuntimeStructs__GenericParamInfo>  value;

 __declspec(property(get=get_Constraints)) ::ArrayW<::System::Type*,::Array<::System::Type*>*>  Constraints;

 __declspec(property(get=get_Attributes)) ::System::Reflection::GenericParameterAttributes  Attributes;

constexpr void __set_value(::cordl_internals::Ptr<::Mono::__RuntimeStructs__GenericParamInfo>  value) ;

constexpr ::cordl_internals::Ptr<::Mono::__RuntimeStructs__GenericParamInfo>& __get_value() ;

constexpr ::cordl_internals::Ptr<::Mono::__RuntimeStructs__GenericParamInfo> const& __get_value() const;

/// @brief Method .ctor addr 0x2412678 size 0x20 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  ptr) ;

/// @brief Method get_Constraints addr 0x2412698 size 0x4 virtual false final false
inline ::ArrayW<::System::Type*,::Array<::System::Type*>*> get_Constraints() ;

/// @brief Method get_Attributes addr 0x24127c8 size 0x1c virtual false final false
inline ::System::Reflection::GenericParameterAttributes get_Attributes() ;

/// @brief Method GetConstraints addr 0x241269c size 0x12c virtual false final false
inline ::ArrayW<::System::Type*,::Array<::System::Type*>*> GetConstraints() ;

/// @brief Method GetConstraintsCount addr 0x24127e4 size 0x40 virtual false final false
inline int32_t GetConstraintsCount() ;

// Ctor Parameters [CppParam { name: "value", ty: "::cordl_internals::Ptr<::Mono::__RuntimeStructs__GenericParamInfo>", modifiers: "", def_value: None }]
constexpr RuntimeGenericParamInfoHandle(::cordl_internals::Ptr<::Mono::__RuntimeStructs__GenericParamInfo>  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RuntimeGenericParamInfoHandle(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RuntimeGenericParamInfoHandle()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::RuntimeGenericParamInfoHandle, 0x8>, "Size mismatch!");

} // namespace end def Mono
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeGenericParamInfoHandle, "Mono", "RuntimeGenericParamInfoHandle");
