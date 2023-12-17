#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CachedMediaAsyncLoader)
namespace GlobalNamespace {
struct __CachedMediaAsyncLoader___LoadSpriteAsync_d__3;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class ISpriteAsyncLoader;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
class AsyncCachedLoader_2;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CachedMediaAsyncLoader;
}
namespace GlobalNamespace {
struct __CachedMediaAsyncLoader___LoadSpriteAsync_d__3;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CachedMediaAsyncLoader);
MARK_VAL_T(::GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3);
// Type: ::<LoadSpriteAsync>d__3
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5910))
// CS Name: ::CachedMediaAsyncLoader::<LoadSpriteAsync>d__3
struct CORDL_TYPE __CachedMediaAsyncLoader___LoadSpriteAsync_d__3 : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::CachedMediaAsyncLoader*  __4__this;

/// @brief Field path offset 0x28
 __declspec(property(get=__get_path, put=__set_path)) ::StringW  path;

/// @brief Field cancellationToken offset 0x30
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1 offset 0x38
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*> const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::CachedMediaAsyncLoader*  value) ;

constexpr ::GlobalNamespace::CachedMediaAsyncLoader* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CachedMediaAsyncLoader*> __get___4__this() const;

constexpr void __set_path(::StringW  value) ;

constexpr ::StringW& __get_path() ;

constexpr ::StringW const& __get_path() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x22fea34 size 0x2c0 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22fecf4 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::CachedMediaAsyncLoader*", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>", modifiers: "", def_value: None }]
constexpr __CachedMediaAsyncLoader___LoadSpriteAsync_d__3(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>  __t__builder, ::GlobalNamespace::CachedMediaAsyncLoader*  __4__this, ::StringW  path, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Sprite*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __CachedMediaAsyncLoader___LoadSpriteAsync_d__3(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __CachedMediaAsyncLoader___LoadSpriteAsync_d__3()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::CachedMediaAsyncLoader
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5911))
// CS Name: ::CachedMediaAsyncLoader*
class CORDL_TYPE CachedMediaAsyncLoader : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _LoadSpriteAsync_d__3 = ::GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _maxNumberOfSpriteCachedElements offset 0x18
 __declspec(property(get=__get__maxNumberOfSpriteCachedElements, put=__set__maxNumberOfSpriteCachedElements)) int32_t  _maxNumberOfSpriteCachedElements;

/// @brief Field _spriteAsyncCachedLoader offset 0x20
 __declspec(property(get=__get__spriteAsyncCachedLoader, put=__set__spriteAsyncCachedLoader)) ::GlobalNamespace::AsyncCachedLoader_2<::StringW,::UnityEngine::Sprite*>*  _spriteAsyncCachedLoader;

/// @brief Convert operator to "::GlobalNamespace::ISpriteAsyncLoader"
constexpr operator  ::GlobalNamespace::ISpriteAsyncLoader*() noexcept;

constexpr void __set__maxNumberOfSpriteCachedElements(int32_t  value) ;

constexpr int32_t& __get__maxNumberOfSpriteCachedElements() ;

constexpr int32_t const& __get__maxNumberOfSpriteCachedElements() const;

constexpr void __set__spriteAsyncCachedLoader(::GlobalNamespace::AsyncCachedLoader_2<::StringW,::UnityEngine::Sprite*>*  value) ;

constexpr ::GlobalNamespace::AsyncCachedLoader_2<::StringW,::UnityEngine::Sprite*>* __get__spriteAsyncCachedLoader() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AsyncCachedLoader_2<::StringW,::UnityEngine::Sprite*>*> __get__spriteAsyncCachedLoader() const;

/// @brief Method ClearCache addr 0x22fe8c8 size 0x58 virtual false final false
inline void ClearCache() ;

/// @brief Method LoadSpriteAsync addr 0x22fe920 size 0x104 virtual true final true
inline ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* LoadSpriteAsync(::StringW  path, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::GlobalNamespace::CachedMediaAsyncLoader* New_ctor() ;

/// @brief Method .ctor addr 0x22fea24 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CachedMediaAsyncLoader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CachedMediaAsyncLoader(CachedMediaAsyncLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CachedMediaAsyncLoader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CachedMediaAsyncLoader(CachedMediaAsyncLoader const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CachedMediaAsyncLoader()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CachedMediaAsyncLoader, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CachedMediaAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CachedMediaAsyncLoader*, "", "CachedMediaAsyncLoader");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CachedMediaAsyncLoader___LoadSpriteAsync_d__3, "", "CachedMediaAsyncLoader/<LoadSpriteAsync>d__3");
