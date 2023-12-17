#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BaseVisualTreeUpdater)
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
class IVisualTreeUpdater;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BaseVisualTreeUpdater;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseVisualTreeUpdater);
// Type: UnityEngine.UIElements::BaseVisualTreeUpdater
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6754))
// CS Name: ::UnityEngine.UIElements::BaseVisualTreeUpdater*
class CORDL_TYPE BaseVisualTreeUpdater : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field panelChanged offset 0x10
 __declspec(property(get=__get_panelChanged, put=__set_panelChanged)) ::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>*  panelChanged;

/// @brief Field m_Panel offset 0x18
 __declspec(property(get=__get_m_Panel, put=__set_m_Panel)) ::UnityEngine::UIElements::BaseVisualElementPanel*  m_Panel;

 __declspec(property(get=get_panel, put=set_panel)) ::UnityEngine::UIElements::BaseVisualElementPanel*  panel;

 __declspec(property(get=get_visualTree)) ::UnityEngine::UIElements::VisualElement*  visualTree;

 __declspec(property(get=get_profilerMarker)) ::Unity::Profiling::ProfilerMarker  profilerMarker;

/// @brief Convert operator to "::UnityEngine::UIElements::IVisualTreeUpdater"
constexpr operator  ::UnityEngine::UIElements::IVisualTreeUpdater*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_panelChanged(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>*  value) ;

constexpr ::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>* __get_panelChanged() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>*> __get_panelChanged() const;

constexpr void __set_m_Panel(::UnityEngine::UIElements::BaseVisualElementPanel*  value) ;

constexpr ::UnityEngine::UIElements::BaseVisualElementPanel* __get_m_Panel() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseVisualElementPanel*> __get_m_Panel() const;

/// @brief Method add_panelChanged addr 0x2db2ba4 size 0xb0 virtual false final false
inline void add_panelChanged(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>*  value) ;

/// @brief Method remove_panelChanged addr 0x2db2c54 size 0xb0 virtual false final false
inline void remove_panelChanged(::System::Action_1<::UnityEngine::UIElements::BaseVisualElementPanel*>*  value) ;

/// @brief Method get_panel addr 0x2db2d04 size 0x8 virtual true final true
inline ::UnityEngine::UIElements::BaseVisualElementPanel* get_panel() ;

/// @brief Method set_panel addr 0x2db2d0c size 0x20 virtual true final true
inline void set_panel(::UnityEngine::UIElements::BaseVisualElementPanel*  value) ;

/// @brief Method get_visualTree addr 0x2db2d2c size 0x24 virtual false final false
inline ::UnityEngine::UIElements::VisualElement* get_visualTree() ;

/// @brief Method get_profilerMarker addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::Unity::Profiling::ProfilerMarker get_profilerMarker() ;

/// @brief Method Dispose addr 0x2db2d50 size 0x6c virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x2db2dbc size 0x4 virtual true final false
inline void Dispose(bool  disposing) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Update() ;

/// @brief Method OnVersionChanged addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::VersionChangeType  versionChangeType) ;

static inline ::UnityEngine::UIElements::BaseVisualTreeUpdater* New_ctor() ;

/// @brief Method .ctor addr 0x2db2dc0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BaseVisualTreeUpdater", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseVisualTreeUpdater(BaseVisualTreeUpdater && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseVisualTreeUpdater", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseVisualTreeUpdater(BaseVisualTreeUpdater const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BaseVisualTreeUpdater()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseVisualTreeUpdater, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BaseVisualTreeUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseVisualTreeUpdater*, "UnityEngine.UIElements", "BaseVisualTreeUpdater");
