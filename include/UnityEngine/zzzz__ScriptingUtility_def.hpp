#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptingUtility)
namespace UnityEngine {
struct __ScriptingUtility__TestClass;
}
// Forward declare root types
namespace UnityEngine {
class ScriptingUtility;
}
namespace UnityEngine {
struct __ScriptingUtility__TestClass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ScriptingUtility);
MARK_VAL_T(::UnityEngine::__ScriptingUtility__TestClass);
// Type: ::TestClass
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10229))
// CS Name: ::ScriptingUtility::TestClass
struct CORDL_TYPE __ScriptingUtility__TestClass : public ::bs_hook::ValueTypeWrapper<0x4> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value offset 0x0
 __declspec(property(get=__get_value, put=__set_value)) int32_t  value;

constexpr void __set_value(int32_t  value) ;

constexpr int32_t& __get_value() ;

constexpr int32_t const& __get_value() const;

// Ctor Parameters [CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ScriptingUtility__TestClass(int32_t  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ScriptingUtility__TestClass(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ScriptingUtility__TestClass()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ScriptingUtility__TestClass, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
// Type: UnityEngine::ScriptingUtility
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10230))
// CS Name: ::UnityEngine::ScriptingUtility*
class CORDL_TYPE ScriptingUtility : public ::System::Object {
public:
// Declarations
using TestClass = ::UnityEngine::__ScriptingUtility__TestClass;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method IsManagedCodeWorking addr 0x2cd3668 size 0x8 virtual false final false
static inline bool IsManagedCodeWorking() ;

// Ctor Parameters [CppParam { name: "", ty: "ScriptingUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptingUtility(ScriptingUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptingUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptingUtility(ScriptingUtility const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ScriptingUtility()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ScriptingUtility, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::ScriptingUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ScriptingUtility*, "UnityEngine", "ScriptingUtility");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ScriptingUtility__TestClass, "UnityEngine", "ScriptingUtility/TestClass");
