#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PanelChangedEventBase_1)
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class PanelChangedEventBase_1;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type T>
class PanelChangedEventBase_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::PanelChangedEventBase_1);
// Type: UnityEngine.UIElements::PanelChangedEventBase`1
// Type: UnityEngine.UIElements::PanelChangedEventBase`1
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7243)), TypeDefinitionIndex(TypeDefinitionIndex(7180)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7180), inst: 1716 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7243), inst: 2 })
// CS Name: ::UnityEngine.UIElements::PanelChangedEventBase`1<T>*
class CORDL_TYPE PanelChangedEventBase_1<T> : public ::UnityEngine::UIElements::EventBase_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::UnityEngine::UIElements::EventBase_1<T>)]{};

/// @brief Field <originPanel>k__BackingField offset 0x80
 __declspec(property(get=__get__originPanel_k__BackingField, put=__set__originPanel_k__BackingField)) ::UnityEngine::UIElements::IPanel*  _originPanel_k__BackingField;

/// @brief Field <destinationPanel>k__BackingField offset 0x88
 __declspec(property(get=__get__destinationPanel_k__BackingField, put=__set__destinationPanel_k__BackingField)) ::UnityEngine::UIElements::IPanel*  _destinationPanel_k__BackingField;

 __declspec(property(get=get_originPanel, put=set_originPanel)) ::UnityEngine::UIElements::IPanel*  originPanel;

 __declspec(property(get=get_destinationPanel, put=set_destinationPanel)) ::UnityEngine::UIElements::IPanel*  destinationPanel;

constexpr void __set__originPanel_k__BackingField(::UnityEngine::UIElements::IPanel*  value) ;

constexpr ::UnityEngine::UIElements::IPanel* __get__originPanel_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IPanel*> __get__originPanel_k__BackingField() const;

constexpr void __set__destinationPanel_k__BackingField(::UnityEngine::UIElements::IPanel*  value) ;

constexpr ::UnityEngine::UIElements::IPanel* __get__destinationPanel_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IPanel*> __get__destinationPanel_k__BackingField() const;

/// @brief Method get_originPanel addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::IPanel* get_originPanel() ;

/// @brief Method set_originPanel addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_originPanel(::UnityEngine::UIElements::IPanel*  value) ;

/// @brief Method get_destinationPanel addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::IPanel* get_destinationPanel() ;

/// @brief Method set_destinationPanel addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_destinationPanel(::UnityEngine::UIElements::IPanel*  value) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Init() ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static inline T GetPooled(::UnityEngine::UIElements::IPanel*  originPanel, ::UnityEngine::UIElements::IPanel*  destinationPanel) ;

static inline ::UnityEngine::UIElements::PanelChangedEventBase_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PanelChangedEventBase_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PanelChangedEventBase_1(PanelChangedEventBase_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PanelChangedEventBase_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PanelChangedEventBase_1(PanelChangedEventBase_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PanelChangedEventBase_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::PanelChangedEventBase_1, "UnityEngine.UIElements", "PanelChangedEventBase`1");
