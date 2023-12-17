#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeClassHandle)
namespace System {
class Object;
}
namespace System {
struct RuntimeTypeHandle;
}
namespace Mono {
struct __RuntimeStructs__MonoClass;
}
// Forward declare root types
namespace Mono {
struct RuntimeClassHandle;
}
// Write type traits
MARK_VAL_T(::Mono::RuntimeClassHandle);
// Type: Mono::RuntimeClassHandle
namespace Mono {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2228))
// CS Name: ::Mono::RuntimeClassHandle
struct CORDL_TYPE RuntimeClassHandle : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value offset 0x0
 __declspec(property(get=__get_value, put=__set_value)) ::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>  value;

 __declspec(property(get=get_Value)) ::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>  Value;

constexpr void __set_value(::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>  value) ;

constexpr ::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>& __get_value() ;

constexpr ::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass> const& __get_value() const;

/// @brief Method .ctor addr 0x24124f4 size 0x8 virtual false final false
inline void _ctor(::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>  value) ;

/// @brief Method .ctor addr 0x24124fc size 0x20 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  ptr) ;

/// @brief Method get_Value addr 0x241251c size 0x8 virtual false final false
inline ::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass> get_Value() ;

/// @brief Method Equals addr 0x2412524 size 0x104 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2412628 size 0x28 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method GetTypeFromClass addr 0x2412650 size 0x4 virtual false final false
static inline ::cordl_internals::intptr_t GetTypeFromClass(::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>  klass) ;

/// @brief Method GetTypeHandle addr 0x2412654 size 0x8 virtual false final false
inline ::System::RuntimeTypeHandle GetTypeHandle() ;

// Ctor Parameters [CppParam { name: "value", ty: "::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>", modifiers: "", def_value: None }]
constexpr RuntimeClassHandle(::cordl_internals::Ptr<::Mono::__RuntimeStructs__MonoClass>  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RuntimeClassHandle(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RuntimeClassHandle()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::RuntimeClassHandle, 0x8>, "Size mismatch!");

} // namespace end def Mono
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeClassHandle, "Mono", "RuntimeClassHandle");
