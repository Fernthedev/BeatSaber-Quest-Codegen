#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MediaAsyncLoader)
namespace GlobalNamespace {
class IMediaAsyncLoader;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
struct __MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1;
}
namespace GlobalNamespace {
struct __MediaAsyncLoader___LoadTextureAsync_d__2;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class AudioClip;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
struct __MediaAsyncLoader___LoadSpriteAsync_d__3;
}
namespace GlobalNamespace {
struct __MediaAsyncLoader___LoadWebpage_d__0;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace GlobalNamespace {
class MediaAsyncLoader;
}
namespace GlobalNamespace {
struct __MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1;
}
namespace GlobalNamespace {
struct __MediaAsyncLoader___LoadSpriteAsync_d__3;
}
namespace GlobalNamespace {
struct __MediaAsyncLoader___LoadTextureAsync_d__2;
}
namespace GlobalNamespace {
struct __MediaAsyncLoader___LoadWebpage_d__0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MediaAsyncLoader);
MARK_VAL_T(::GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1);
MARK_VAL_T(::GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3);
MARK_VAL_T(::GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2);
MARK_VAL_T(::GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0);
// Type: ::<LoadWebpage>d__0
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5899))
// CS Name: ::MediaAsyncLoader::<LoadWebpage>d__0
struct CORDL_TYPE __MediaAsyncLoader___LoadWebpage_d__0 : public ::bs_hook::ValueTypeWrapper<0x48> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder;

/// @brief Field uri offset 0x20
 __declspec(property(get=__get_uri, put=__set_uri)) ::StringW  uri;

/// @brief Field cancellationToken offset 0x28
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <www>5__2 offset 0x30
 __declspec(property(get=__get__www_5__2, put=__set__www_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _www_5__2;

/// @brief Field <request>5__3 offset 0x38
 __declspec(property(get=__get__request_5__3, put=__set__request_5__3)) ::UnityEngine::AsyncOperation*  _request_5__3;

/// @brief Field <>u__1 offset 0x40
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> const& __get___t__builder() const;

constexpr void __set_uri(::StringW  value) ;

constexpr ::StringW& __get_uri() ;

constexpr ::StringW const& __get_uri() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set__www_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr ::UnityEngine::Networking::UnityWebRequest* __get__www_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::UnityWebRequest*> __get__www_5__2() const;

constexpr void __set__request_5__3(::UnityEngine::AsyncOperation*  value) ;

constexpr ::UnityEngine::AsyncOperation* __get__request_5__3() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AsyncOperation*> __get__request_5__3() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0x22fc490 size 0x43c virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22fc8cc size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "uri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_www_5__2", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: None }, CppParam { name: "_request_5__3", ty: "::UnityEngine::AsyncOperation*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __MediaAsyncLoader___LoadWebpage_d__0(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::StringW  uri, ::System::Threading::CancellationToken  cancellationToken, ::UnityEngine::Networking::UnityWebRequest*  _www_5__2, ::UnityEngine::AsyncOperation*  _request_5__3, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MediaAsyncLoader___LoadWebpage_d__0(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x48>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MediaAsyncLoader___LoadWebpage_d__0()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<LoadAudioClipFromFilePathAsync>d__1
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5900))
// CS Name: ::MediaAsyncLoader::<LoadAudioClipFromFilePathAsync>d__1
struct CORDL_TYPE __MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1 : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*>  __t__builder;

/// @brief Field filePath offset 0x20
 __declspec(property(get=__get_filePath, put=__set_filePath)) ::StringW  filePath;

/// @brief Field <www>5__2 offset 0x28
 __declspec(property(get=__get__www_5__2, put=__set__www_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _www_5__2;

/// @brief Field <request>5__3 offset 0x30
 __declspec(property(get=__get__request_5__3, put=__set__request_5__3)) ::UnityEngine::AsyncOperation*  _request_5__3;

/// @brief Field <>u__1 offset 0x38
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*> const& __get___t__builder() const;

constexpr void __set_filePath(::StringW  value) ;

constexpr ::StringW& __get_filePath() ;

constexpr ::StringW const& __get_filePath() const;

constexpr void __set__www_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr ::UnityEngine::Networking::UnityWebRequest* __get__www_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::UnityWebRequest*> __get__www_5__2() const;

constexpr void __set__request_5__3(::UnityEngine::AsyncOperation*  value) ;

constexpr ::UnityEngine::AsyncOperation* __get__request_5__3() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AsyncOperation*> __get__request_5__3() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0x22fc924 size 0x47c virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22fcda0 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*>", modifiers: "", def_value: None }, CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_www_5__2", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: None }, CppParam { name: "_request_5__3", ty: "::UnityEngine::AsyncOperation*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*>  __t__builder, ::StringW  filePath, ::UnityEngine::Networking::UnityWebRequest*  _www_5__2, ::UnityEngine::AsyncOperation*  _request_5__3, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<LoadTextureAsync>d__2
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5901))
// CS Name: ::MediaAsyncLoader::<LoadTextureAsync>d__2
struct CORDL_TYPE __MediaAsyncLoader___LoadTextureAsync_d__2 : public ::bs_hook::ValueTypeWrapper<0x48> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Texture2D*>  __t__builder;

/// @brief Field path offset 0x20
 __declspec(property(get=__get_path, put=__set_path)) ::StringW  path;

/// @brief Field cancellationToken offset 0x28
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <www>5__2 offset 0x30
 __declspec(property(get=__get__www_5__2, put=__set__www_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _www_5__2;

/// @brief Field <request>5__3 offset 0x38
 __declspec(property(get=__get__request_5__3, put=__set__request_5__3)) ::UnityEngine::AsyncOperation*  _request_5__3;

/// @brief Field <>u__1 offset 0x40
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Texture2D*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Texture2D*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Texture2D*> const& __get___t__builder() const;

constexpr void __set_path(::StringW  value) ;

constexpr ::StringW& __get_path() ;

constexpr ::StringW const& __get_path() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set__www_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr ::UnityEngine::Networking::UnityWebRequest* __get__www_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::UnityWebRequest*> __get__www_5__2() const;

constexpr void __set__request_5__3(::UnityEngine::AsyncOperation*  value) ;

constexpr ::UnityEngine::AsyncOperation* __get__request_5__3() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AsyncOperation*> __get__request_5__3() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0x22fcdf8 size 0x434 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22fd22c size 0x1058 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Texture2D*>", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_www_5__2", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: None }, CppParam { name: "_request_5__3", ty: "::UnityEngine::AsyncOperation*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __MediaAsyncLoader___LoadTextureAsync_d__2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Texture2D*>  __t__builder, ::StringW  path, ::System::Threading::CancellationToken  cancellationToken, ::UnityEngine::Networking::UnityWebRequest*  _www_5__2, ::UnityEngine::AsyncOperation*  _request_5__3, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MediaAsyncLoader___LoadTextureAsync_d__2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x48>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MediaAsyncLoader___LoadTextureAsync_d__2()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<LoadSpriteAsync>d__3
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5902))
// CS Name: ::MediaAsyncLoader::<LoadSpriteAsync>d__3
struct CORDL_TYPE __MediaAsyncLoader___LoadSpriteAsync_d__3 : public ::bs_hook::ValueTypeWrapper<0x48> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>  __t__builder;

/// @brief Field path offset 0x20
 __declspec(property(get=__get_path, put=__set_path)) ::StringW  path;

/// @brief Field cancellationToken offset 0x28
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <www>5__2 offset 0x30
 __declspec(property(get=__get__www_5__2, put=__set__www_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _www_5__2;

/// @brief Field <request>5__3 offset 0x38
 __declspec(property(get=__get__request_5__3, put=__set__request_5__3)) ::UnityEngine::AsyncOperation*  _request_5__3;

/// @brief Field <>u__1 offset 0x40
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*> const& __get___t__builder() const;

constexpr void __set_path(::StringW  value) ;

constexpr ::StringW& __get_path() ;

constexpr ::StringW const& __get_path() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set__www_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr ::UnityEngine::Networking::UnityWebRequest* __get__www_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::UnityWebRequest*> __get__www_5__2() const;

constexpr void __set__request_5__3(::UnityEngine::AsyncOperation*  value) ;

constexpr ::UnityEngine::AsyncOperation* __get__request_5__3() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AsyncOperation*> __get__request_5__3() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0x22fe284 size 0x5ec virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22fe870 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_www_5__2", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: None }, CppParam { name: "_request_5__3", ty: "::UnityEngine::AsyncOperation*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __MediaAsyncLoader___LoadSpriteAsync_d__3(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>  __t__builder, ::StringW  path, ::System::Threading::CancellationToken  cancellationToken, ::UnityEngine::Networking::UnityWebRequest*  _www_5__2, ::UnityEngine::AsyncOperation*  _request_5__3, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MediaAsyncLoader___LoadSpriteAsync_d__3(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x48>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MediaAsyncLoader___LoadSpriteAsync_d__3()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MediaAsyncLoader
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5903))
// CS Name: ::MediaAsyncLoader*
class CORDL_TYPE MediaAsyncLoader : public ::System::Object {
public:
// Declarations
using _LoadSpriteAsync_d__3 = ::GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3;

using _LoadTextureAsync_d__2 = ::GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2;

using _LoadAudioClipFromFilePathAsync_d__1 = ::GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1;

using _LoadWebpage_d__0 = ::GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Convert operator to "::GlobalNamespace::IMediaAsyncLoader"
constexpr operator  ::GlobalNamespace::IMediaAsyncLoader*() noexcept;

/// @brief Method LoadWebpage addr 0x22fc04c size 0xfc virtual false final false
static inline ::System::Threading::Tasks::Task_1<::StringW>* LoadWebpage(::StringW  uri, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method LoadAudioClipFromFilePathAsync addr 0x22fc148 size 0xf0 virtual true final true
inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* LoadAudioClipFromFilePathAsync(::StringW  filePath) ;

/// @brief Method LoadTextureAsync addr 0x22fc238 size 0xfc virtual false final false
static inline ::System::Threading::Tasks::Task_1<::UnityEngine::Texture2D*>* LoadTextureAsync(::StringW  path, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method LoadSpriteAsync addr 0x22fc334 size 0xfc virtual false final false
static inline ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* LoadSpriteAsync(::StringW  path, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Log addr 0x22fc430 size 0x58 virtual false final false
static inline void Log(::StringW  message) ;

static inline ::GlobalNamespace::MediaAsyncLoader* New_ctor() ;

/// @brief Method .ctor addr 0x22fc488 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MediaAsyncLoader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MediaAsyncLoader(MediaAsyncLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MediaAsyncLoader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MediaAsyncLoader(MediaAsyncLoader const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MediaAsyncLoader()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MediaAsyncLoader, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MediaAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MediaAsyncLoader*, "", "MediaAsyncLoader");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1, "", "MediaAsyncLoader/<LoadAudioClipFromFilePathAsync>d__1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3, "", "MediaAsyncLoader/<LoadSpriteAsync>d__3");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2, "", "MediaAsyncLoader/<LoadTextureAsync>d__2");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0, "", "MediaAsyncLoader/<LoadWebpage>d__0");
