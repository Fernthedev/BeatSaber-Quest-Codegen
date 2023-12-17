#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SendMouseEvents)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct __SendMouseEvents__HitInfo;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine {
class SendMouseEvents;
}
namespace UnityEngine {
struct __SendMouseEvents__HitInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SendMouseEvents);
MARK_VAL_T(::UnityEngine::__SendMouseEvents__HitInfo);
// Type: ::HitInfo
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15956))
// CS Name: ::SendMouseEvents::HitInfo
struct CORDL_TYPE __SendMouseEvents__HitInfo : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field target offset 0x0
 __declspec(property(get=__get_target, put=__set_target)) ::UnityEngine::GameObject*  target;

/// @brief Field camera offset 0x8
 __declspec(property(get=__get_camera, put=__set_camera)) ::UnityEngine::Camera*  camera;

constexpr void __set_target(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get_target() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get_target() const;

constexpr void __set_camera(::UnityEngine::Camera*  value) ;

constexpr ::UnityEngine::Camera* __get_camera() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> __get_camera() const;

/// @brief Method SendMessage addr 0x2d0fb04 size 0x24 virtual false final false
inline void SendMessage(::StringW  name) ;

/// @brief Method op_Implicit addr 0x2d0fa64 size 0xa0 virtual false final false
static inline bool op_Implicit_bool(::UnityEngine::__SendMouseEvents__HitInfo  exists) ;

/// @brief Method Compare addr 0x2d0fb28 size 0xb4 virtual false final false
static inline bool Compare(::UnityEngine::__SendMouseEvents__HitInfo  lhs, ::UnityEngine::__SendMouseEvents__HitInfo  rhs) ;

// Ctor Parameters [CppParam { name: "target", ty: "::UnityEngine::GameObject*", modifiers: "", def_value: None }, CppParam { name: "camera", ty: "::UnityEngine::Camera*", modifiers: "", def_value: None }]
constexpr __SendMouseEvents__HitInfo(::UnityEngine::GameObject*  target, ::UnityEngine::Camera*  camera) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __SendMouseEvents__HitInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __SendMouseEvents__HitInfo()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__SendMouseEvents__HitInfo, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
// Type: UnityEngine::SendMouseEvents
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15957))
// CS Name: ::UnityEngine::SendMouseEvents*
class CORDL_TYPE SendMouseEvents : public ::System::Object {
public:
// Declarations
using HitInfo = ::UnityEngine::__SendMouseEvents__HitInfo;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_MouseUsed(bool  value) ;

static inline bool getStaticF_s_MouseUsed() ;

static inline void setStaticF_m_LastHit(::ArrayW<::UnityEngine::__SendMouseEvents__HitInfo,::Array<::UnityEngine::__SendMouseEvents__HitInfo>*>  value) ;

static inline ::ArrayW<::UnityEngine::__SendMouseEvents__HitInfo,::Array<::UnityEngine::__SendMouseEvents__HitInfo>*> getStaticF_m_LastHit() ;

static inline void setStaticF_m_MouseDownHit(::ArrayW<::UnityEngine::__SendMouseEvents__HitInfo,::Array<::UnityEngine::__SendMouseEvents__HitInfo>*>  value) ;

static inline ::ArrayW<::UnityEngine::__SendMouseEvents__HitInfo,::Array<::UnityEngine::__SendMouseEvents__HitInfo>*> getStaticF_m_MouseDownHit() ;

static inline void setStaticF_m_CurrentHit(::ArrayW<::UnityEngine::__SendMouseEvents__HitInfo,::Array<::UnityEngine::__SendMouseEvents__HitInfo>*>  value) ;

static inline ::ArrayW<::UnityEngine::__SendMouseEvents__HitInfo,::Array<::UnityEngine::__SendMouseEvents__HitInfo>*> getStaticF_m_CurrentHit() ;

static inline void setStaticF_m_Cameras(::ArrayW<::UnityEngine::Camera*,::Array<::UnityEngine::Camera*>*>  value) ;

static inline ::ArrayW<::UnityEngine::Camera*,::Array<::UnityEngine::Camera*>*> getStaticF_m_Cameras() ;

static inline void setStaticF_s_GetMouseState(::System::Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>>*  value) ;

static inline ::System::Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityEngine::Vector2>>* getStaticF_s_GetMouseState() ;

static inline void setStaticF_s_MousePosition(::UnityEngine::Vector2  value) ;

static inline ::UnityEngine::Vector2 getStaticF_s_MousePosition() ;

static inline void setStaticF_s_MouseButtonPressedThisFrame(bool  value) ;

static inline bool getStaticF_s_MouseButtonPressedThisFrame() ;

static inline void setStaticF_s_MouseButtonIsPressed(bool  value) ;

static inline bool getStaticF_s_MouseButtonIsPressed() ;

/// @brief Method UpdateMouse addr 0x2d0ead8 size 0x1c4 virtual false final false
static inline void UpdateMouse() ;

/// @brief Method SetMouseMoved addr 0x2d0ec9c size 0x5c virtual false final false
static inline void SetMouseMoved() ;

/// @brief Method DoSendMouseEvents addr 0x2d0ecf8 size 0x94c virtual false final false
static inline void DoSendMouseEvents(int32_t  skipRTCameras) ;

/// @brief Method SendEvents addr 0x2d0f644 size 0x420 virtual false final false
static inline void SendEvents(int32_t  i, ::UnityEngine::__SendMouseEvents__HitInfo  hit) ;

// Ctor Parameters [CppParam { name: "", ty: "SendMouseEvents", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SendMouseEvents(SendMouseEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SendMouseEvents", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SendMouseEvents(SendMouseEvents const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SendMouseEvents()  = default;
public:


// Fields

// Static field s_MouseUsed

// Static field m_LastHit

// Static field m_MouseDownHit

// Static field m_CurrentHit

// Static field m_Cameras

// Static field s_GetMouseState

// Static field s_MousePosition

// Static field s_MouseButtonPressedThisFrame

// Static field s_MouseButtonIsPressed


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SendMouseEvents, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::SendMouseEvents);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SendMouseEvents*, "UnityEngine", "SendMouseEvents");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__SendMouseEvents__HitInfo, "UnityEngine", "SendMouseEvents/HitInfo");
