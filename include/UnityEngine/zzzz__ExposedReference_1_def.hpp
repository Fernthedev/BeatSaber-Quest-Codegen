#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ExposedReference_1)
namespace UnityEngine {
class IExposedPropertyTable;
}
namespace UnityEngine {
struct PropertyName;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
template<typename T>
struct ExposedReference_1;
}
namespace UnityEngine {
template<::il2cpp_utils::il2cpp_reference_type T>
struct ExposedReference_1<T>;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::ExposedReference_1);
// Type: UnityEngine::ExposedReference`1
// Type: UnityEngine::ExposedReference`1
namespace UnityEngine {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10046))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10046), inst: 2 })
// CS Name: ::UnityEngine::ExposedReference`1<T>
struct CORDL_TYPE ExposedReference_1<T> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field exposedName offset 0x0
 __declspec(property(get=__get_exposedName, put=__set_exposedName)) ::UnityEngine::PropertyName  exposedName;

/// @brief Field defaultValue offset 0x8
 __declspec(property(get=__get_defaultValue, put=__set_defaultValue)) ::UnityEngine::Object*  defaultValue;

constexpr void __set_exposedName(::UnityEngine::PropertyName  value) ;

constexpr ::UnityEngine::PropertyName& __get_exposedName() ;

constexpr ::UnityEngine::PropertyName const& __get_exposedName() const;

constexpr void __set_defaultValue(::UnityEngine::Object*  value) ;

constexpr ::UnityEngine::Object* __get_defaultValue() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> __get_defaultValue() const;

/// @brief Method Resolve addr 0x0 size 0xffffffffffffffff virtual false final false
inline T Resolve(::UnityEngine::IExposedPropertyTable*  resolver) ;

// Ctor Parameters [CppParam { name: "exposedName", ty: "::UnityEngine::PropertyName", modifiers: "", def_value: None }, CppParam { name: "defaultValue", ty: "::UnityEngine::Object*", modifiers: "", def_value: None }]
constexpr ExposedReference_1(::UnityEngine::PropertyName  exposedName, ::UnityEngine::Object*  defaultValue) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ExposedReference_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ExposedReference_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::ExposedReference_1, "UnityEngine", "ExposedReference`1");
