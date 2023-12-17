#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(G_FpsManager)
namespace Tayx::Graphy::Fps {
class G_FpsMonitor;
}
namespace Tayx::Graphy::UI {
class IModifiableState;
}
namespace Tayx::Graphy {
class GraphyManager;
}
namespace Tayx::Graphy::Fps {
class G_FpsText;
}
namespace Tayx::Graphy {
struct __GraphyManager__ModuleState;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UI {
class Image;
}
namespace Tayx::Graphy::Fps {
class G_FpsGraph;
}
namespace UnityEngine {
class GameObject;
}
namespace Tayx::Graphy::UI {
class IMovable;
}
namespace Tayx::Graphy {
struct __GraphyManager__ModulePosition;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace Tayx::Graphy::Fps {
class G_FpsManager;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::Fps::G_FpsManager);
// Type: Tayx.Graphy.Fps::G_FpsManager
namespace Tayx::Graphy::Fps {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15082))
// CS Name: ::Tayx.Graphy.Fps::G_FpsManager*
class CORDL_TYPE G_FpsManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field m_fpsGraphGameObject offset 0x18
 __declspec(property(get=__get_m_fpsGraphGameObject, put=__set_m_fpsGraphGameObject)) ::UnityEngine::GameObject*  m_fpsGraphGameObject;

/// @brief Field m_nonBasicTextGameObjects offset 0x20
 __declspec(property(get=__get_m_nonBasicTextGameObjects, put=__set_m_nonBasicTextGameObjects)) ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  m_nonBasicTextGameObjects;

/// @brief Field m_backgroundImages offset 0x28
 __declspec(property(get=__get_m_backgroundImages, put=__set_m_backgroundImages)) ::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>*  m_backgroundImages;

/// @brief Field m_graphyManager offset 0x30
 __declspec(property(get=__get_m_graphyManager, put=__set_m_graphyManager)) ::Tayx::Graphy::GraphyManager*  m_graphyManager;

/// @brief Field m_fpsGraph offset 0x38
 __declspec(property(get=__get_m_fpsGraph, put=__set_m_fpsGraph)) ::Tayx::Graphy::Fps::G_FpsGraph*  m_fpsGraph;

/// @brief Field m_fpsMonitor offset 0x40
 __declspec(property(get=__get_m_fpsMonitor, put=__set_m_fpsMonitor)) ::Tayx::Graphy::Fps::G_FpsMonitor*  m_fpsMonitor;

/// @brief Field m_fpsText offset 0x48
 __declspec(property(get=__get_m_fpsText, put=__set_m_fpsText)) ::Tayx::Graphy::Fps::G_FpsText*  m_fpsText;

/// @brief Field m_rectTransform offset 0x50
 __declspec(property(get=__get_m_rectTransform, put=__set_m_rectTransform)) ::UnityEngine::RectTransform*  m_rectTransform;

/// @brief Field m_childrenGameObjects offset 0x58
 __declspec(property(get=__get_m_childrenGameObjects, put=__set_m_childrenGameObjects)) ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  m_childrenGameObjects;

/// @brief Field m_previousModuleState offset 0x60
 __declspec(property(get=__get_m_previousModuleState, put=__set_m_previousModuleState)) ::Tayx::Graphy::__GraphyManager__ModuleState  m_previousModuleState;

/// @brief Field m_currentModuleState offset 0x64
 __declspec(property(get=__get_m_currentModuleState, put=__set_m_currentModuleState)) ::Tayx::Graphy::__GraphyManager__ModuleState  m_currentModuleState;

/// @brief Convert operator to "::Tayx::Graphy::UI::IMovable"
constexpr operator  ::Tayx::Graphy::UI::IMovable*() noexcept;

/// @brief Convert operator to "::Tayx::Graphy::UI::IModifiableState"
constexpr operator  ::Tayx::Graphy::UI::IModifiableState*() noexcept;

constexpr void __set_m_fpsGraphGameObject(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get_m_fpsGraphGameObject() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get_m_fpsGraphGameObject() const;

constexpr void __set_m_nonBasicTextGameObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* __get_m_nonBasicTextGameObjects() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*> __get_m_nonBasicTextGameObjects() const;

constexpr void __set_m_backgroundImages(::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* __get_m_backgroundImages() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>*> __get_m_backgroundImages() const;

constexpr void __set_m_graphyManager(::Tayx::Graphy::GraphyManager*  value) ;

constexpr ::Tayx::Graphy::GraphyManager* __get_m_graphyManager() ;

constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::GraphyManager*> __get_m_graphyManager() const;

constexpr void __set_m_fpsGraph(::Tayx::Graphy::Fps::G_FpsGraph*  value) ;

constexpr ::Tayx::Graphy::Fps::G_FpsGraph* __get_m_fpsGraph() ;

constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Fps::G_FpsGraph*> __get_m_fpsGraph() const;

constexpr void __set_m_fpsMonitor(::Tayx::Graphy::Fps::G_FpsMonitor*  value) ;

constexpr ::Tayx::Graphy::Fps::G_FpsMonitor* __get_m_fpsMonitor() ;

constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Fps::G_FpsMonitor*> __get_m_fpsMonitor() const;

constexpr void __set_m_fpsText(::Tayx::Graphy::Fps::G_FpsText*  value) ;

constexpr ::Tayx::Graphy::Fps::G_FpsText* __get_m_fpsText() ;

constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Fps::G_FpsText*> __get_m_fpsText() const;

constexpr void __set_m_rectTransform(::UnityEngine::RectTransform*  value) ;

constexpr ::UnityEngine::RectTransform* __get_m_rectTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> __get_m_rectTransform() const;

constexpr void __set_m_childrenGameObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* __get_m_childrenGameObjects() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*> __get_m_childrenGameObjects() const;

constexpr void __set_m_previousModuleState(::Tayx::Graphy::__GraphyManager__ModuleState  value) ;

constexpr ::Tayx::Graphy::__GraphyManager__ModuleState& __get_m_previousModuleState() ;

constexpr ::Tayx::Graphy::__GraphyManager__ModuleState const& __get_m_previousModuleState() const;

constexpr void __set_m_currentModuleState(::Tayx::Graphy::__GraphyManager__ModuleState  value) ;

constexpr ::Tayx::Graphy::__GraphyManager__ModuleState& __get_m_currentModuleState() ;

constexpr ::Tayx::Graphy::__GraphyManager__ModuleState const& __get_m_currentModuleState() const;

/// @brief Method Awake addr 0x2a08a04 size 0x4 virtual false final false
inline void Awake() ;

/// @brief Method Start addr 0x2a08a08 size 0x4 virtual false final false
inline void Start() ;

/// @brief Method SetPosition addr 0x2a008cc size 0x2e8 virtual true final true
inline void SetPosition(::Tayx::Graphy::__GraphyManager__ModulePosition  newModulePosition) ;

/// @brief Method SetState addr 0x2a011c8 size 0x1b0 virtual true final true
inline void SetState(::Tayx::Graphy::__GraphyManager__ModuleState  state, bool  silentUpdate) ;

/// @brief Method RestorePreviousState addr 0x2a035f0 size 0xc virtual false final false
inline void RestorePreviousState() ;

/// @brief Method UpdateParameters addr 0x2a013a8 size 0x1fc virtual false final false
inline void UpdateParameters() ;

/// @brief Method RefreshParameters addr 0x2a05b6c size 0x1f4 virtual false final false
inline void RefreshParameters() ;

/// @brief Method Init addr 0x2a037f4 size 0x4e4 virtual false final false
inline void Init() ;

/// @brief Method SetGraphActive addr 0x2a08a0c size 0x44 virtual false final false
inline void SetGraphActive(bool  active) ;

static inline ::Tayx::Graphy::Fps::G_FpsManager* New_ctor() ;

/// @brief Method .ctor addr 0x2a08bf4 size 0xe4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "G_FpsManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
G_FpsManager(G_FpsManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "G_FpsManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
G_FpsManager(G_FpsManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 G_FpsManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Fps::G_FpsManager, 0x68>, "Size mismatch!");

} // namespace end def Tayx::Graphy::Fps
NEED_NO_BOX(::Tayx::Graphy::Fps::G_FpsManager);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Fps::G_FpsManager*, "Tayx.Graphy.Fps", "G_FpsManager");
