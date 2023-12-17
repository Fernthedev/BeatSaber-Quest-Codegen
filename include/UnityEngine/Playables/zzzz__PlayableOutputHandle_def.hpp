#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayableOutputHandle)
namespace UnityEngine::Playables {
class INotificationReceiver;
}
namespace System {
class Object;
}
namespace UnityEngine::Playables {
class INotification;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::PlayableOutputHandle);
// Type: UnityEngine.Playables::PlayableOutputHandle
namespace UnityEngine::Playables {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10415))
// CS Name: ::UnityEngine.Playables::PlayableOutputHandle
struct CORDL_TYPE PlayableOutputHandle : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle offset 0x0
 __declspec(property(get=__get_m_Handle, put=__set_m_Handle)) ::cordl_internals::intptr_t  m_Handle;

/// @brief Field m_Version offset 0x8
 __declspec(property(get=__get_m_Version, put=__set_m_Version)) uint32_t  m_Version;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Playables::PlayableOutputHandle>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Playables::PlayableOutputHandle>*() ;

constexpr void __set_m_Handle(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_Handle() ;

constexpr ::cordl_internals::intptr_t const& __get_m_Handle() const;

constexpr void __set_m_Version(uint32_t  value) ;

constexpr uint32_t& __get_m_Version() ;

constexpr uint32_t const& __get_m_Version() const;

static inline void setStaticF_m_Null(::UnityEngine::Playables::PlayableOutputHandle  value) ;

static inline ::UnityEngine::Playables::PlayableOutputHandle getStaticF_m_Null() ;

/// @brief Method get_Null addr 0x2cf4940 size 0x58 virtual false final false
static inline ::UnityEngine::Playables::PlayableOutputHandle get_Null() ;

/// @brief Method IsPlayableOutputOfType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline bool IsPlayableOutputOfType() ;

/// @brief Method GetHashCode addr 0x2cf4998 size 0x34 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x2cf49cc size 0x88 virtual false final false
static inline bool op_Equality(::UnityEngine::Playables::PlayableOutputHandle  lhs, ::UnityEngine::Playables::PlayableOutputHandle  rhs) ;

/// @brief Method Equals addr 0x2cf4a88 size 0x78 virtual true final false
inline bool Equals(::System::Object*  p) ;

/// @brief Method Equals addr 0x2cf4b00 size 0x80 virtual true final true
inline bool Equals(::UnityEngine::Playables::PlayableOutputHandle  other) ;

/// @brief Method CompareVersion addr 0x2cf4a54 size 0x34 virtual false final false
static inline bool CompareVersion(::UnityEngine::Playables::PlayableOutputHandle  lhs, ::UnityEngine::Playables::PlayableOutputHandle  rhs) ;

/// @brief Method IsValid addr 0x2cf4b80 size 0x74 virtual false final false
inline bool IsValid() ;

/// @brief Method GetPlayableOutputType addr 0x2cf4c30 size 0x74 virtual false final false
inline ::System::Type* GetPlayableOutputType() ;

/// @brief Method SetReferenceObject addr 0x2cf4ce0 size 0x84 virtual false final false
inline void SetReferenceObject(::UnityEngine::Object*  target) ;

/// @brief Method SetUserData addr 0x2cf4da8 size 0x84 virtual false final false
inline void SetUserData(::UnityEngine::Object*  target) ;

/// @brief Method GetSourcePlayable addr 0x2cf4e70 size 0x8c virtual false final false
inline ::UnityEngine::Playables::PlayableHandle GetSourcePlayable() ;

/// @brief Method SetSourcePlayable addr 0x2cf4f40 size 0x98 virtual false final false
inline void SetSourcePlayable(::UnityEngine::Playables::PlayableHandle  target, int32_t  port) ;

/// @brief Method GetSourceOutputPort addr 0x2cf502c size 0x74 virtual false final false
inline int32_t GetSourceOutputPort() ;

/// @brief Method SetWeight addr 0x2cf50dc size 0x84 virtual false final false
inline void SetWeight(float_t  weight) ;

/// @brief Method PushNotification addr 0x2cf51ac size 0xa0 virtual false final false
inline void PushNotification(::UnityEngine::Playables::PlayableHandle  origin, ::UnityEngine::Playables::INotification*  notification, ::System::Object*  context) ;

/// @brief Method AddNotificationReceiver addr 0x2cf52a8 size 0x84 virtual false final false
inline void AddNotificationReceiver(::UnityEngine::Playables::INotificationReceiver*  receiver) ;

/// @brief Method IsValid_Injected addr 0x2cf4bf4 size 0x3c virtual false final false
static inline bool IsValid_Injected(ByRef<::UnityEngine::Playables::PlayableOutputHandle>  _unity_self) ;

/// @brief Method GetPlayableOutputType_Injected addr 0x2cf4ca4 size 0x3c virtual false final false
static inline ::System::Type* GetPlayableOutputType_Injected(ByRef<::UnityEngine::Playables::PlayableOutputHandle>  _unity_self) ;

/// @brief Method SetReferenceObject_Injected addr 0x2cf4d64 size 0x44 virtual false final false
static inline void SetReferenceObject_Injected(ByRef<::UnityEngine::Playables::PlayableOutputHandle>  _unity_self, ::UnityEngine::Object*  target) ;

/// @brief Method SetUserData_Injected addr 0x2cf4e2c size 0x44 virtual false final false
static inline void SetUserData_Injected(ByRef<::UnityEngine::Playables::PlayableOutputHandle>  _unity_self, ::UnityEngine::Object*  target) ;

/// @brief Method GetSourcePlayable_Injected addr 0x2cf4efc size 0x44 virtual false final false
static inline void GetSourcePlayable_Injected(ByRef<::UnityEngine::Playables::PlayableOutputHandle>  _unity_self, ByRef<::UnityEngine::Playables::PlayableHandle>  ret) ;

/// @brief Method SetSourcePlayable_Injected addr 0x2cf4fd8 size 0x54 virtual false final false
static inline void SetSourcePlayable_Injected(ByRef<::UnityEngine::Playables::PlayableOutputHandle>  _unity_self, ByRef<::UnityEngine::Playables::PlayableHandle>  target, int32_t  port) ;

/// @brief Method GetSourceOutputPort_Injected addr 0x2cf50a0 size 0x3c virtual false final false
static inline int32_t GetSourceOutputPort_Injected(ByRef<::UnityEngine::Playables::PlayableOutputHandle>  _unity_self) ;

/// @brief Method SetWeight_Injected addr 0x2cf5160 size 0x4c virtual false final false
static inline void SetWeight_Injected(ByRef<::UnityEngine::Playables::PlayableOutputHandle>  _unity_self, float_t  weight) ;

/// @brief Method PushNotification_Injected addr 0x2cf524c size 0x5c virtual false final false
static inline void PushNotification_Injected(ByRef<::UnityEngine::Playables::PlayableOutputHandle>  _unity_self, ByRef<::UnityEngine::Playables::PlayableHandle>  origin, ::UnityEngine::Playables::INotification*  notification, ::System::Object*  context) ;

/// @brief Method AddNotificationReceiver_Injected addr 0x2cf532c size 0x44 virtual false final false
static inline void AddNotificationReceiver_Injected(ByRef<::UnityEngine::Playables::PlayableOutputHandle>  _unity_self, ::UnityEngine::Playables::INotificationReceiver*  receiver) ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr PlayableOutputHandle(::cordl_internals::intptr_t  m_Handle, uint32_t  m_Version) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PlayableOutputHandle(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PlayableOutputHandle()  = default;


// Fields

// Static field m_Null


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayableOutputHandle, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableOutputHandle, "UnityEngine.Playables", "PlayableOutputHandle");
