#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionProbe)
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
class Texture;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct __ReflectionProbe__ReflectionProbeEvent;
}
// Forward declare root types
namespace UnityEngine {
struct __ReflectionProbe__ReflectionProbeEvent;
}
namespace UnityEngine {
class ReflectionProbe;
}
// Write type traits
MARK_VAL_T(::UnityEngine::__ReflectionProbe__ReflectionProbeEvent);
MARK_REF_PTR_T(::UnityEngine::ReflectionProbe);
// Type: ::ReflectionProbeEvent
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10149))
// CS Name: ::ReflectionProbe::ReflectionProbeEvent
struct CORDL_TYPE __ReflectionProbe__ReflectionProbeEvent : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____ReflectionProbe__ReflectionProbeEvent_Unwrapped
enum struct ____ReflectionProbe__ReflectionProbeEvent_Unwrapped : int32_t {
__E_ReflectionProbeAdded = static_cast<int32_t>(0x0),
__E_ReflectionProbeRemoved = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field ReflectionProbeAdded value: static_cast<int32_t>(0x0)
static ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent const ReflectionProbeAdded;

/// @brief Field ReflectionProbeRemoved value: static_cast<int32_t>(0x1)
static ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent const ReflectionProbeRemoved;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____ReflectionProbe__ReflectionProbeEvent_Unwrapped () const noexcept {
return std::bit_cast<____ReflectionProbe__ReflectionProbeEvent_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ReflectionProbe__ReflectionProbeEvent(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ReflectionProbe__ReflectionProbeEvent(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ReflectionProbe__ReflectionProbeEvent()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__ReflectionProbe__ReflectionProbeEvent, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
// Type: UnityEngine::ReflectionProbe
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10187))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10150))
// CS Name: ::UnityEngine::ReflectionProbe*
class CORDL_TYPE ReflectionProbe : public ::UnityEngine::Behaviour {
public:
// Declarations
using ReflectionProbeEvent = ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::Behaviour)]{};

static inline void setStaticF_reflectionProbeChanged(::System::Action_2<::UnityEngine::ReflectionProbe*,::UnityEngine::__ReflectionProbe__ReflectionProbeEvent>*  value) ;

static inline ::System::Action_2<::UnityEngine::ReflectionProbe*,::UnityEngine::__ReflectionProbe__ReflectionProbeEvent>* getStaticF_reflectionProbeChanged() ;

static inline void setStaticF_defaultReflectionTexture(::System::Action_1<::UnityEngine::Texture*>*  value) ;

static inline ::System::Action_1<::UnityEngine::Texture*>* getStaticF_defaultReflectionTexture() ;

/// @brief Method CallReflectionProbeEvent addr 0x2cc68c8 size 0x80 virtual false final false
static inline void CallReflectionProbeEvent(::UnityEngine::ReflectionProbe*  probe, ::UnityEngine::__ReflectionProbe__ReflectionProbeEvent  probeEvent) ;

/// @brief Method CallSetDefaultReflection addr 0x2cc6948 size 0x6c virtual false final false
static inline void CallSetDefaultReflection(::UnityEngine::Texture*  defaultReflectionCubemap) ;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionProbe", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionProbe(ReflectionProbe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionProbe", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionProbe(ReflectionProbe const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ReflectionProbe()  = default;
public:


// Fields

// Static field reflectionProbeChanged

// Static field defaultReflectionTexture


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ReflectionProbe, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__ReflectionProbe__ReflectionProbeEvent, "UnityEngine", "ReflectionProbe/ReflectionProbeEvent");
NEED_NO_BOX(::UnityEngine::ReflectionProbe);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ReflectionProbe*, "UnityEngine", "ReflectionProbe");
