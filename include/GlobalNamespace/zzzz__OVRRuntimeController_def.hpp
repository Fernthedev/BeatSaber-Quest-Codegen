#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRRuntimeController)
namespace GlobalNamespace {
struct OVRGLTFInputNode;
}
namespace UnityEngine {
class Shader;
}
namespace GlobalNamespace {
class __OVRRuntimeController___UpdateControllerModel_d__16;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
struct __OVRInput__Controller;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class OVRGLTFAnimatinonNode;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRRuntimeController;
}
namespace GlobalNamespace {
class __OVRRuntimeController___UpdateControllerModel_d__16;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRRuntimeController);
MARK_REF_PTR_T(::GlobalNamespace::__OVRRuntimeController___UpdateControllerModel_d__16);
// Type: ::<UpdateControllerModel>d__16
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8161))
// CS Name: ::OVRRuntimeController::<UpdateControllerModel>d__16*
class CORDL_TYPE __OVRRuntimeController___UpdateControllerModel_d__16 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::OVRRuntimeController*  __4__this;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::System::Object*  value) ;

constexpr ::System::Object* __get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get___2__current() const;

constexpr void __set___4__this(::GlobalNamespace::OVRRuntimeController*  value) ;

constexpr ::GlobalNamespace::OVRRuntimeController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRRuntimeController*> __get___4__this() const;

static inline ::GlobalNamespace::__OVRRuntimeController___UpdateControllerModel_d__16* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x27bb58c size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x27bb668 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x27bb66c size 0x120 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x27bb78c size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x27bb794 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x27bb7d4 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRRuntimeController___UpdateControllerModel_d__16", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRRuntimeController___UpdateControllerModel_d__16(__OVRRuntimeController___UpdateControllerModel_d__16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRRuntimeController___UpdateControllerModel_d__16", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRRuntimeController___UpdateControllerModel_d__16(__OVRRuntimeController___UpdateControllerModel_d__16 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRRuntimeController___UpdateControllerModel_d__16()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRRuntimeController___UpdateControllerModel_d__16, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVRRuntimeController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8162))
// CS Name: ::OVRRuntimeController*
class CORDL_TYPE OVRRuntimeController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _UpdateControllerModel_d__16 = ::GlobalNamespace::__OVRRuntimeController___UpdateControllerModel_d__16;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field m_controller offset 0x18
 __declspec(property(get=__get_m_controller, put=__set_m_controller)) ::GlobalNamespace::__OVRInput__Controller  m_controller;

/// @brief Field m_controllerModelShader offset 0x20
 __declspec(property(get=__get_m_controllerModelShader, put=__set_m_controllerModelShader)) ::UnityEngine::Shader*  m_controllerModelShader;

/// @brief Field m_supportAnimation offset 0x28
 __declspec(property(get=__get_m_supportAnimation, put=__set_m_supportAnimation)) bool  m_supportAnimation;

/// @brief Field m_controllerObject offset 0x30
 __declspec(property(get=__get_m_controllerObject, put=__set_m_controllerObject)) ::UnityEngine::GameObject*  m_controllerObject;

/// @brief Field m_controllerModelPath offset 0x38
 __declspec(property(get=__get_m_controllerModelPath, put=__set_m_controllerModelPath)) ::StringW  m_controllerModelPath;

/// @brief Field m_modelSupported offset 0x40
 __declspec(property(get=__get_m_modelSupported, put=__set_m_modelSupported)) bool  m_modelSupported;

/// @brief Field m_hasInputFocus offset 0x41
 __declspec(property(get=__get_m_hasInputFocus, put=__set_m_hasInputFocus)) bool  m_hasInputFocus;

/// @brief Field m_hasInputFocusPrev offset 0x42
 __declspec(property(get=__get_m_hasInputFocusPrev, put=__set_m_hasInputFocusPrev)) bool  m_hasInputFocusPrev;

/// @brief Field m_controllerConnectedPrev offset 0x43
 __declspec(property(get=__get_m_controllerConnectedPrev, put=__set_m_controllerConnectedPrev)) bool  m_controllerConnectedPrev;

/// @brief Field m_animationNodes offset 0x48
 __declspec(property(get=__get_m_animationNodes, put=__set_m_animationNodes)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode*>*  m_animationNodes;

constexpr void __set_m_controller(::GlobalNamespace::__OVRInput__Controller  value) ;

constexpr ::GlobalNamespace::__OVRInput__Controller& __get_m_controller() ;

constexpr ::GlobalNamespace::__OVRInput__Controller const& __get_m_controller() const;

constexpr void __set_m_controllerModelShader(::UnityEngine::Shader*  value) ;

constexpr ::UnityEngine::Shader* __get_m_controllerModelShader() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> __get_m_controllerModelShader() const;

constexpr void __set_m_supportAnimation(bool  value) ;

constexpr bool& __get_m_supportAnimation() ;

constexpr bool const& __get_m_supportAnimation() const;

constexpr void __set_m_controllerObject(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get_m_controllerObject() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get_m_controllerObject() const;

static inline void setStaticF_leftControllerModelPath(::StringW  value) ;

static inline ::StringW getStaticF_leftControllerModelPath() ;

static inline void setStaticF_rightControllerModelPath(::StringW  value) ;

static inline ::StringW getStaticF_rightControllerModelPath() ;

constexpr void __set_m_controllerModelPath(::StringW  value) ;

constexpr ::StringW& __get_m_controllerModelPath() ;

constexpr ::StringW const& __get_m_controllerModelPath() const;

constexpr void __set_m_modelSupported(bool  value) ;

constexpr bool& __get_m_modelSupported() ;

constexpr bool const& __get_m_modelSupported() const;

constexpr void __set_m_hasInputFocus(bool  value) ;

constexpr bool& __get_m_hasInputFocus() ;

constexpr bool const& __get_m_hasInputFocus() const;

constexpr void __set_m_hasInputFocusPrev(bool  value) ;

constexpr bool& __get_m_hasInputFocusPrev() ;

constexpr bool const& __get_m_hasInputFocusPrev() const;

constexpr void __set_m_controllerConnectedPrev(bool  value) ;

constexpr bool& __get_m_controllerConnectedPrev() ;

constexpr bool const& __get_m_controllerConnectedPrev() const;

constexpr void __set_m_animationNodes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode*>* __get_m_animationNodes() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRGLTFInputNode,::GlobalNamespace::OVRGLTFAnimatinonNode*>*> __get_m_animationNodes() const;

/// @brief Method Start addr 0x27bab34 size 0x184 virtual false final false
inline void Start() ;

/// @brief Method Update addr 0x27bae84 size 0x10c virtual false final false
inline void Update() ;

/// @brief Method IsModelSupported addr 0x27bacb8 size 0x164 virtual false final false
inline bool IsModelSupported(::StringW  modelPath) ;

/// @brief Method LoadControllerModel addr 0x27bb2cc size 0x2c0 virtual false final false
inline bool LoadControllerModel(::StringW  modelPath) ;

/// @brief Method UpdateControllerModel addr 0x27bae1c size 0x68 virtual false final false
inline ::System::Collections::IEnumerator* UpdateControllerModel() ;

/// @brief Method UpdateControllerAnimation addr 0x27baf90 size 0x33c virtual false final false
inline void UpdateControllerAnimation() ;

/// @brief Method InputFocusAquired addr 0x27bb5b4 size 0xc virtual false final false
inline void InputFocusAquired() ;

/// @brief Method InputFocusLost addr 0x27bb5c0 size 0x8 virtual false final false
inline void InputFocusLost() ;

static inline ::GlobalNamespace::OVRRuntimeController* New_ctor() ;

/// @brief Method .ctor addr 0x27bb5c8 size 0x14 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRRuntimeController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRRuntimeController(OVRRuntimeController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRRuntimeController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRRuntimeController(OVRRuntimeController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRRuntimeController()  = default;
public:


// Fields

// Static field leftControllerModelPath

// Static field rightControllerModelPath


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRRuntimeController, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRRuntimeController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRRuntimeController*, "", "OVRRuntimeController");
NEED_NO_BOX(::GlobalNamespace::__OVRRuntimeController___UpdateControllerModel_d__16);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRRuntimeController___UpdateControllerModel_d__16*, "", "OVRRuntimeController/<UpdateControllerModel>d__16");
