#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_def.hpp"
CORDL_MODULE_EXPORT(VisualElementFocusChangeTarget)
namespace UnityEngine::UIElements {
template<typename T>
class ObjectPool_1;
}
namespace UnityEngine::UIElements {
class Focusable;
}
namespace UnityEngine::UIElements {
class FocusController;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementFocusChangeTarget;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElementFocusChangeTarget);
// Type: UnityEngine.UIElements::VisualElementFocusChangeTarget
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6881))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6794))
// CS Name: ::UnityEngine.UIElements::VisualElementFocusChangeTarget*
class CORDL_TYPE VisualElementFocusChangeTarget : public ::UnityEngine::UIElements::FocusChangeDirection {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::UIElements::FocusChangeDirection)]{};

/// @brief Field <target>k__BackingField offset 0x18
 __declspec(property(get=__get__target_k__BackingField, put=__set__target_k__BackingField)) ::UnityEngine::UIElements::Focusable*  _target_k__BackingField;

 __declspec(property(get=get_target, put=set_target)) ::UnityEngine::UIElements::Focusable*  target;

static inline void setStaticF_Pool(::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::VisualElementFocusChangeTarget*>*  value) ;

static inline ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::VisualElementFocusChangeTarget*>* getStaticF_Pool() ;

constexpr void __set__target_k__BackingField(::UnityEngine::UIElements::Focusable*  value) ;

constexpr ::UnityEngine::UIElements::Focusable* __get__target_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Focusable*> __get__target_k__BackingField() const;

/// @brief Method GetPooled addr 0x2dbb45c size 0x88 virtual false final false
static inline ::UnityEngine::UIElements::VisualElementFocusChangeTarget* GetPooled(::UnityEngine::UIElements::Focusable*  target) ;

/// @brief Method Dispose addr 0x2dbb4e4 size 0x84 virtual true final false
inline void Dispose() ;

/// @brief Method ApplyTo addr 0x2dbb568 size 0x24 virtual true final false
inline void ApplyTo(::UnityEngine::UIElements::FocusController*  focusController, ::UnityEngine::UIElements::Focusable*  f) ;

static inline ::UnityEngine::UIElements::VisualElementFocusChangeTarget* New_ctor() ;

/// @brief Method .ctor addr 0x2dbb58c size 0xa0 virtual false final false
inline void _ctor() ;

/// @brief Method get_target addr 0x2dbb62c size 0x8 virtual false final false
inline ::UnityEngine::UIElements::Focusable* get_target() ;

/// @brief Method set_target addr 0x2dbb634 size 0x8 virtual false final false
inline void set_target(::UnityEngine::UIElements::Focusable*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementFocusChangeTarget", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VisualElementFocusChangeTarget(VisualElementFocusChangeTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementFocusChangeTarget", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisualElementFocusChangeTarget(VisualElementFocusChangeTarget const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VisualElementFocusChangeTarget()  = default;
public:


// Fields

// Static field Pool


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementFocusChangeTarget, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementFocusChangeTarget);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementFocusChangeTarget*, "UnityEngine.UIElements", "VisualElementFocusChangeTarget");
