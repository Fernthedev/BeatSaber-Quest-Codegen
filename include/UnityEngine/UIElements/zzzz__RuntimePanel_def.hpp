#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseRuntimePanel_def.hpp"
CORDL_MODULE_EXPORT(RuntimePanel)
namespace UnityEngine::UIElements {
class EventDispatcher;
}
namespace UnityEngine::UIElements {
class PanelSettings;
}
namespace UnityEngine {
class ScriptableObject;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class RuntimePanel;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::RuntimePanel);
// Type: UnityEngine.UIElements::RuntimePanel
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6877))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7018))
// CS Name: ::UnityEngine.UIElements::RuntimePanel*
class CORDL_TYPE RuntimePanel : public ::UnityEngine::UIElements::BaseRuntimePanel {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x1e0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x1e0 - sizeof(::UnityEngine::UIElements::BaseRuntimePanel)]{};

/// @brief Field m_PanelSettings offset 0x1d8
 __declspec(property(get=__get_m_PanelSettings, put=__set_m_PanelSettings)) ::UnityEngine::UIElements::PanelSettings*  m_PanelSettings;

 __declspec(property(get=get_panelSettings)) ::UnityEngine::UIElements::PanelSettings*  panelSettings;

static inline void setStaticF_s_EventDispatcher(::UnityEngine::UIElements::EventDispatcher*  value) ;

static inline ::UnityEngine::UIElements::EventDispatcher* getStaticF_s_EventDispatcher() ;

constexpr void __set_m_PanelSettings(::UnityEngine::UIElements::PanelSettings*  value) ;

constexpr ::UnityEngine::UIElements::PanelSettings* __get_m_PanelSettings() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::PanelSettings*> __get_m_PanelSettings() const;

/// @brief Method get_panelSettings addr 0x2e165c4 size 0x8 virtual true final true
inline ::UnityEngine::UIElements::PanelSettings* get_panelSettings() ;

/// @brief Method Create addr 0x2e165cc size 0x60 virtual false final false
static inline ::UnityEngine::UIElements::RuntimePanel* Create(::UnityEngine::ScriptableObject*  ownerObject) ;

static inline ::UnityEngine::UIElements::RuntimePanel* New_ctor(::UnityEngine::ScriptableObject*  ownerObject) ;

/// @brief Method .ctor addr 0x2e1662c size 0x1f8 virtual false final false
inline void _ctor(::UnityEngine::ScriptableObject*  ownerObject) ;

/// @brief Method Update addr 0x2e168a8 size 0x80 virtual true final false
inline void Update() ;

// Ctor Parameters [CppParam { name: "", ty: "RuntimePanel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimePanel(RuntimePanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimePanel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimePanel(RuntimePanel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RuntimePanel()  = default;
public:


// Fields

// Static field s_EventDispatcher


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::RuntimePanel, 0x1e0>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::RuntimePanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RuntimePanel*, "UnityEngine.UIElements", "RuntimePanel");
