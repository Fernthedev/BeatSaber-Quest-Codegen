#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GarbageCollector)
namespace UnityEngine::Scripting {
struct __GarbageCollector__Mode;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace UnityEngine::Scripting {
struct __GarbageCollector__Mode;
}
namespace UnityEngine::Scripting {
class GarbageCollector;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Scripting::__GarbageCollector__Mode);
MARK_REF_PTR_T(::UnityEngine::Scripting::GarbageCollector);
// Type: ::Mode
namespace UnityEngine::Scripting {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10318))
// CS Name: ::GarbageCollector::Mode
struct CORDL_TYPE __GarbageCollector__Mode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____GarbageCollector__Mode_Unwrapped
enum struct ____GarbageCollector__Mode_Unwrapped : int32_t {
__E_Disabled = static_cast<int32_t>(0x0),
__E_Enabled = static_cast<int32_t>(0x1),
__E_Manual = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Disabled value: static_cast<int32_t>(0x0)
static ::UnityEngine::Scripting::__GarbageCollector__Mode const Disabled;

/// @brief Field Enabled value: static_cast<int32_t>(0x1)
static ::UnityEngine::Scripting::__GarbageCollector__Mode const Enabled;

/// @brief Field Manual value: static_cast<int32_t>(0x2)
static ::UnityEngine::Scripting::__GarbageCollector__Mode const Manual;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____GarbageCollector__Mode_Unwrapped () const noexcept {
return std::bit_cast<____GarbageCollector__Mode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __GarbageCollector__Mode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __GarbageCollector__Mode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __GarbageCollector__Mode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Scripting::__GarbageCollector__Mode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Scripting
// Type: UnityEngine.Scripting::GarbageCollector
namespace UnityEngine::Scripting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10319))
// CS Name: ::UnityEngine.Scripting::GarbageCollector*
class CORDL_TYPE GarbageCollector : public ::System::Object {
public:
// Declarations
using Mode = ::UnityEngine::Scripting::__GarbageCollector__Mode;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_GCModeChanged(::System::Action_1<::UnityEngine::Scripting::__GarbageCollector__Mode>*  value) ;

static inline ::System::Action_1<::UnityEngine::Scripting::__GarbageCollector__Mode>* getStaticF_GCModeChanged() ;

/// @brief Method set_GCMode addr 0x2ce9c78 size 0xc0 virtual false final false
static inline void set_GCMode(::UnityEngine::Scripting::__GarbageCollector__Mode  value) ;

/// @brief Method SetMode addr 0x2ce9d60 size 0x3c virtual false final false
static inline void SetMode(::UnityEngine::Scripting::__GarbageCollector__Mode  mode) ;

/// @brief Method GetMode addr 0x2ce9d38 size 0x28 virtual false final false
static inline ::UnityEngine::Scripting::__GarbageCollector__Mode GetMode() ;

// Ctor Parameters [CppParam { name: "", ty: "GarbageCollector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GarbageCollector(GarbageCollector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GarbageCollector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GarbageCollector(GarbageCollector const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GarbageCollector()  = default;
public:


// Fields

// Static field GCModeChanged


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Scripting::GarbageCollector, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Scripting
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Scripting::__GarbageCollector__Mode, "UnityEngine.Scripting", "GarbageCollector/Mode");
NEED_NO_BOX(::UnityEngine::Scripting::GarbageCollector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Scripting::GarbageCollector*, "UnityEngine.Scripting", "GarbageCollector");
