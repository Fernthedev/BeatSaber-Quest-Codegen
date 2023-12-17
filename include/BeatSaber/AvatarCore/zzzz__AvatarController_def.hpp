#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarController)
namespace BeatSaber::AvatarCore {
class Avatar;
}
namespace BeatSaber::AvatarCore {
struct __AvatarController___LoadAndDisplayAvatar_d__11;
}
namespace BeatSaber::AvatarCore {
class IAvatarPoseDataProvider;
}
namespace BeatSaber::AvatarCore {
class AvatarSystemCollection;
}
namespace BeatSaber::AvatarCore {
struct AvatarDisplayContext;
}
namespace Zenject {
class DiContainer;
}
namespace UnityEngine {
class Transform;
}
namespace BeatSaber::AvatarCore {
class IAvatarVisualDataProvider;
}
namespace BeatSaber::AvatarCore {
class IOptionalAvatarDataProvider;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class AvatarController;
}
namespace BeatSaber::AvatarCore {
struct __AvatarController___LoadAndDisplayAvatar_d__11;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::AvatarController);
MARK_VAL_T(::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11);
// Type: ::<LoadAndDisplayAvatar>d__11
namespace BeatSaber::AvatarCore {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15167))
// CS Name: ::AvatarController::<LoadAndDisplayAvatar>d__11
struct CORDL_TYPE __AvatarController___LoadAndDisplayAvatar_d__11 : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::BeatSaber::AvatarCore::AvatarController*  __4__this;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::Avatar*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::BeatSaber::AvatarCore::AvatarController*  value) ;

constexpr ::BeatSaber::AvatarCore::AvatarController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarController*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::Avatar*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::Avatar*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::Avatar*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0xe0ae3c size 0x5d0 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0xe0b58c size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BeatSaber::AvatarCore::AvatarController*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::Avatar*>", modifiers: "", def_value: None }]
constexpr __AvatarController___LoadAndDisplayAvatar_d__11(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::BeatSaber::AvatarCore::AvatarController*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::Avatar*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AvatarController___LoadAndDisplayAvatar_d__11(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AvatarController___LoadAndDisplayAvatar_d__11()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11, 0x38>, "Size mismatch!");

} // namespace end def BeatSaber::AvatarCore
// Type: BeatSaber.AvatarCore::AvatarController
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15168))
// CS Name: ::BeatSaber.AvatarCore::AvatarController*
class CORDL_TYPE AvatarController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _LoadAndDisplayAvatar_d__11 = ::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _parentingTransform offset 0x18
 __declspec(property(get=__get__parentingTransform, put=__set__parentingTransform)) ::UnityEngine::Transform*  _parentingTransform;

/// @brief Field _container offset 0x20
 __declspec(property(get=__get__container, put=__set__container)) ::Zenject::DiContainer*  _container;

/// @brief Field _avatarSystemCollection offset 0x28
 __declspec(property(get=__get__avatarSystemCollection, put=__set__avatarSystemCollection)) ::BeatSaber::AvatarCore::AvatarSystemCollection*  _avatarSystemCollection;

/// @brief Field _avatarDisplayContext offset 0x30
 __declspec(property(get=__get__avatarDisplayContext, put=__set__avatarDisplayContext)) ::BeatSaber::AvatarCore::AvatarDisplayContext  _avatarDisplayContext;

/// @brief Field _visualDataProvider offset 0x38
 __declspec(property(get=__get__visualDataProvider, put=__set__visualDataProvider)) ::BeatSaber::AvatarCore::IAvatarVisualDataProvider*  _visualDataProvider;

/// @brief Field _poseDataProvider offset 0x40
 __declspec(property(get=__get__poseDataProvider, put=__set__poseDataProvider)) ::BeatSaber::AvatarCore::IAvatarPoseDataProvider*  _poseDataProvider;

/// @brief Field _optionalDataProvider offset 0x48
 __declspec(property(get=__get__optionalDataProvider, put=__set__optionalDataProvider)) ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*  _optionalDataProvider;

/// @brief Field _avatar offset 0x50
 __declspec(property(get=__get__avatar, put=__set__avatar)) ::BeatSaber::AvatarCore::Avatar*  _avatar;

 __declspec(property(get=get_avatar)) ::BeatSaber::AvatarCore::Avatar*  avatar;

constexpr void __set__parentingTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__parentingTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__parentingTransform() const;

constexpr void __set__container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__container() const;

constexpr void __set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection*  value) ;

constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection* __get__avatarSystemCollection() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarSystemCollection*> __get__avatarSystemCollection() const;

constexpr void __set__avatarDisplayContext(::BeatSaber::AvatarCore::AvatarDisplayContext  value) ;

constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext& __get__avatarDisplayContext() ;

constexpr ::BeatSaber::AvatarCore::AvatarDisplayContext const& __get__avatarDisplayContext() const;

constexpr void __set__visualDataProvider(::BeatSaber::AvatarCore::IAvatarVisualDataProvider*  value) ;

constexpr ::BeatSaber::AvatarCore::IAvatarVisualDataProvider* __get__visualDataProvider() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarVisualDataProvider*> __get__visualDataProvider() const;

constexpr void __set__poseDataProvider(::BeatSaber::AvatarCore::IAvatarPoseDataProvider*  value) ;

constexpr ::BeatSaber::AvatarCore::IAvatarPoseDataProvider* __get__poseDataProvider() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*> __get__poseDataProvider() const;

constexpr void __set__optionalDataProvider(::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*  value) ;

constexpr ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* __get__optionalDataProvider() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*> __get__optionalDataProvider() const;

constexpr void __set__avatar(::BeatSaber::AvatarCore::Avatar*  value) ;

constexpr ::BeatSaber::AvatarCore::Avatar* __get__avatar() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::Avatar*> __get__avatar() const;

/// @brief Method get_avatar addr 0xe0ad94 size 0x8 virtual false final false
inline ::BeatSaber::AvatarCore::Avatar* get_avatar() ;

/// @brief Method Start addr 0xe0ad9c size 0x4 virtual false final false
inline void Start() ;

/// @brief Method LoadAndDisplayAvatar addr 0xe0ada0 size 0x94 virtual false final false
inline void LoadAndDisplayAvatar() ;

static inline ::BeatSaber::AvatarCore::AvatarController* New_ctor() ;

/// @brief Method .ctor addr 0xe0ae34 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AvatarController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AvatarController(AvatarController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AvatarController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AvatarController(AvatarController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AvatarController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarController, 0x58>, "Size mismatch!");

} // namespace end def BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::AvatarController);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarController*, "BeatSaber.AvatarCore", "AvatarController");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::__AvatarController___LoadAndDisplayAvatar_d__11, "BeatSaber.AvatarCore", "AvatarController/<LoadAndDisplayAvatar>d__11");
