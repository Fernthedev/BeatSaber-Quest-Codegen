#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(VisualElementPanelActivator)
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
}
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine::UIElements {
class IVisualElementPanelActivatable;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementPanelActivator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::VisualElementPanelActivator);
// Type: UnityEngine.UIElements::VisualElementPanelActivator
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6749))
// CS Name: ::UnityEngine.UIElements::VisualElementPanelActivator*
class CORDL_TYPE VisualElementPanelActivator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Activatable offset 0x10
 __declspec(property(get=__get_m_Activatable, put=__set_m_Activatable)) ::UnityEngine::UIElements::IVisualElementPanelActivatable*  m_Activatable;

/// @brief Field <isActive>k__BackingField offset 0x18
 __declspec(property(get=__get__isActive_k__BackingField, put=__set__isActive_k__BackingField)) bool  _isActive_k__BackingField;

/// @brief Field <isDetaching>k__BackingField offset 0x19
 __declspec(property(get=__get__isDetaching_k__BackingField, put=__set__isDetaching_k__BackingField)) bool  _isDetaching_k__BackingField;

 __declspec(property(get=get_isActive, put=set_isActive)) bool  isActive;

 __declspec(property(get=get_isDetaching, put=set_isDetaching)) bool  isDetaching;

constexpr void __set_m_Activatable(::UnityEngine::UIElements::IVisualElementPanelActivatable*  value) ;

constexpr ::UnityEngine::UIElements::IVisualElementPanelActivatable* __get_m_Activatable() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IVisualElementPanelActivatable*> __get_m_Activatable() const;

constexpr void __set__isActive_k__BackingField(bool  value) ;

constexpr bool& __get__isActive_k__BackingField() ;

constexpr bool const& __get__isActive_k__BackingField() const;

constexpr void __set__isDetaching_k__BackingField(bool  value) ;

constexpr bool& __get__isDetaching_k__BackingField() ;

constexpr bool const& __get__isDetaching_k__BackingField() const;

/// @brief Method get_isActive addr 0x2db21cc size 0x8 virtual false final false
inline bool get_isActive() ;

/// @brief Method set_isActive addr 0x2db21d4 size 0xc virtual false final false
inline void set_isActive(bool  value) ;

/// @brief Method get_isDetaching addr 0x2db21e0 size 0x8 virtual false final false
inline bool get_isDetaching() ;

/// @brief Method set_isDetaching addr 0x2db21e8 size 0xc virtual false final false
inline void set_isDetaching(bool  value) ;

static inline ::UnityEngine::UIElements::VisualElementPanelActivator* New_ctor(::UnityEngine::UIElements::IVisualElementPanelActivatable*  activatable) ;

/// @brief Method .ctor addr 0x2db03f0 size 0x28 virtual false final false
inline void _ctor(::UnityEngine::UIElements::IVisualElementPanelActivatable*  activatable) ;

/// @brief Method SetActive addr 0x2db0500 size 0x33c virtual false final false
inline void SetActive(bool  action) ;

/// @brief Method SendActivation addr 0x2db21f4 size 0x118 virtual false final false
inline void SendActivation() ;

/// @brief Method SendDeactivation addr 0x2db230c size 0x118 virtual false final false
inline void SendDeactivation() ;

/// @brief Method OnEnter addr 0x2db2424 size 0x10 virtual false final false
inline void OnEnter(::UnityEngine::UIElements::AttachToPanelEvent*  evt) ;

/// @brief Method OnLeave addr 0x2db2434 size 0x74 virtual false final false
inline void OnLeave(::UnityEngine::UIElements::DetachFromPanelEvent*  evt) ;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementPanelActivator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VisualElementPanelActivator(VisualElementPanelActivator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementPanelActivator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisualElementPanelActivator(VisualElementPanelActivator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VisualElementPanelActivator()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::VisualElementPanelActivator, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementPanelActivator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementPanelActivator*, "UnityEngine.UIElements", "VisualElementPanelActivator");
