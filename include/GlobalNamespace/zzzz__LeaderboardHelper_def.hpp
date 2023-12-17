#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LeaderboardHelper)
namespace GlobalNamespace {
class LeaderboardIdsModelSO;
}
namespace GlobalNamespace {
class BeatmapLevelCollectionSO;
}
namespace GlobalNamespace {
struct __LeaderboardHelper___CreateOculusLeaderboard_d__2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Net::Http {
class HttpClient;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class LeaderboardHelper;
}
namespace GlobalNamespace {
struct __LeaderboardHelper___CreateOculusLeaderboard_d__2;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LeaderboardHelper);
MARK_VAL_T(::GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2);
// Type: ::<CreateOculusLeaderboard>d__2
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5849))
// CS Name: ::LeaderboardHelper::<CreateOculusLeaderboard>d__2
struct CORDL_TYPE __LeaderboardHelper___CreateOculusLeaderboard_d__2 : public ::bs_hook::ValueTypeWrapper<0x58> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field leaderboardID offset 0x28
 __declspec(property(get=__get_leaderboardID, put=__set_leaderboardID)) ::StringW  leaderboardID;

/// @brief Field appToken offset 0x30
 __declspec(property(get=__get_appToken, put=__set_appToken)) ::StringW  appToken;

/// @brief Field <httpClient>5__2 offset 0x38
 __declspec(property(get=__get__httpClient_5__2, put=__set__httpClient_5__2)) ::System::Net::Http::HttpClient*  _httpClient_5__2;

/// @brief Field <request>5__3 offset 0x40
 __declspec(property(get=__get__request_5__3, put=__set__request_5__3)) ::System::Net::Http::HttpRequestMessage*  _request_5__3;

/// @brief Field <contentList>5__4 offset 0x48
 __declspec(property(get=__get__contentList_5__4, put=__set__contentList_5__4)) ::System::Collections::Generic::List_1<::StringW>*  _contentList_5__4;

/// @brief Field <>u__1 offset 0x50
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set_leaderboardID(::StringW  value) ;

constexpr ::StringW& __get_leaderboardID() ;

constexpr ::StringW const& __get_leaderboardID() const;

constexpr void __set_appToken(::StringW  value) ;

constexpr ::StringW& __get_appToken() ;

constexpr ::StringW const& __get_appToken() const;

constexpr void __set__httpClient_5__2(::System::Net::Http::HttpClient*  value) ;

constexpr ::System::Net::Http::HttpClient* __get__httpClient_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpClient*> __get__httpClient_5__2() const;

constexpr void __set__request_5__3(::System::Net::Http::HttpRequestMessage*  value) ;

constexpr ::System::Net::Http::HttpRequestMessage* __get__request_5__3() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpRequestMessage*> __get__request_5__3() const;

constexpr void __set__contentList_5__4(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::List_1<::StringW>* __get__contentList_5__4() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> __get__contentList_5__4() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x22f4bb8 size 0xb48 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22f5700 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "leaderboardID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "appToken", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_httpClient_5__2", ty: "::System::Net::Http::HttpClient*", modifiers: "", def_value: None }, CppParam { name: "_request_5__3", ty: "::System::Net::Http::HttpRequestMessage*", modifiers: "", def_value: None }, CppParam { name: "_contentList_5__4", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: None }]
constexpr __LeaderboardHelper___CreateOculusLeaderboard_d__2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::StringW  leaderboardID, ::StringW  appToken, ::System::Net::Http::HttpClient*  _httpClient_5__2, ::System::Net::Http::HttpRequestMessage*  _request_5__3, ::System::Collections::Generic::List_1<::StringW>*  _contentList_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __LeaderboardHelper___CreateOculusLeaderboard_d__2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x58>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __LeaderboardHelper___CreateOculusLeaderboard_d__2()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::LeaderboardHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5850))
// CS Name: ::LeaderboardHelper*
class CORDL_TYPE LeaderboardHelper : public ::System::Object {
public:
// Declarations
using _CreateOculusLeaderboard_d__2 = ::GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _leaderboardIds offset 0x10
 __declspec(property(get=__get__leaderboardIds, put=__set__leaderboardIds)) ::System::Collections::Generic::List_1<::StringW>*  _leaderboardIds;

constexpr void __set__leaderboardIds(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::List_1<::StringW>* __get__leaderboardIds() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> __get__leaderboardIds() const;

/// @brief Method CreateOculusLeaderboards addr 0x22f3c18 size 0xe7c virtual false final false
inline void CreateOculusLeaderboards(::GlobalNamespace::LeaderboardIdsModelSO*  leaderboardIdsModel, ::GlobalNamespace::BeatmapLevelCollectionSO*  _levelCollection, bool  debug, ::StringW  appToken) ;

/// @brief Method CreateOculusLeaderboard addr 0x22f4a94 size 0xa4 virtual false final false
inline void CreateOculusLeaderboard(::StringW  leaderboardID, ::StringW  appToken) ;

static inline ::GlobalNamespace::LeaderboardHelper* New_ctor() ;

/// @brief Method .ctor addr 0x22f4b38 size 0x80 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LeaderboardHelper(LeaderboardHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LeaderboardHelper(LeaderboardHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LeaderboardHelper()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LeaderboardHelper, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LeaderboardHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LeaderboardHelper*, "", "LeaderboardHelper");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2, "", "LeaderboardHelper/<CreateOculusLeaderboard>d__2");
