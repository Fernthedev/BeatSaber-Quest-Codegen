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
CORDL_MODULE_EXPORT(MultiplayerStatusModel)
namespace GlobalNamespace {
struct __MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9;
}
namespace System::Net::Http {
class HttpClient;
}
namespace GlobalNamespace {
class MultiplayerStatusData;
}
namespace GlobalNamespace {
class __MultiplayerStatusModel__MultiplayerStatusDataFB;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class IMultiplayerStatusModel;
}
namespace GlobalNamespace {
class INetworkConfig;
}
namespace System {
class UriBuilder;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerStatusModel;
}
namespace GlobalNamespace {
class __MultiplayerStatusModel__MultiplayerStatusDataFB;
}
namespace GlobalNamespace {
struct __MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerStatusModel);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerStatusModel__MultiplayerStatusDataFB);
MARK_VAL_T(::GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9);
// Type: ::MultiplayerStatusDataFB
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4473))
// CS Name: ::MultiplayerStatusModel::MultiplayerStatusDataFB*
class CORDL_TYPE __MultiplayerStatusModel__MultiplayerStatusDataFB : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field data offset 0x10
 __declspec(property(get=__get_data, put=__set_data)) ::ArrayW<::GlobalNamespace::MultiplayerStatusData*,::Array<::GlobalNamespace::MultiplayerStatusData*>*>  data;

constexpr void __set_data(::ArrayW<::GlobalNamespace::MultiplayerStatusData*,::Array<::GlobalNamespace::MultiplayerStatusData*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::MultiplayerStatusData*,::Array<::GlobalNamespace::MultiplayerStatusData*>*>& __get_data() ;

constexpr ::ArrayW<::GlobalNamespace::MultiplayerStatusData*,::Array<::GlobalNamespace::MultiplayerStatusData*>*> const& __get_data() const;

static inline ::GlobalNamespace::__MultiplayerStatusModel__MultiplayerStatusDataFB* New_ctor() ;

/// @brief Method .ctor addr 0x2353200 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerStatusModel__MultiplayerStatusDataFB", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MultiplayerStatusModel__MultiplayerStatusDataFB(__MultiplayerStatusModel__MultiplayerStatusDataFB && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerStatusModel__MultiplayerStatusDataFB", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MultiplayerStatusModel__MultiplayerStatusDataFB(__MultiplayerStatusModel__MultiplayerStatusDataFB const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MultiplayerStatusModel__MultiplayerStatusDataFB()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerStatusModel__MultiplayerStatusDataFB, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<GetMultiplayerStatusAsyncInternal>d__9
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4474))
// CS Name: ::MultiplayerStatusModel::<GetMultiplayerStatusAsyncInternal>d__9
struct CORDL_TYPE __MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9 : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerStatusData*>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::MultiplayerStatusModel*  __4__this;

/// @brief Field <uriBuilder>5__2 offset 0x28
 __declspec(property(get=__get__uriBuilder_5__2, put=__set__uriBuilder_5__2)) ::System::UriBuilder*  _uriBuilder_5__2;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerStatusData*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerStatusData*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerStatusData*> const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::MultiplayerStatusModel*  value) ;

constexpr ::GlobalNamespace::MultiplayerStatusModel* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerStatusModel*> __get___4__this() const;

constexpr void __set__uriBuilder_5__2(::System::UriBuilder*  value) ;

constexpr ::System::UriBuilder* __get__uriBuilder_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::UriBuilder*> __get__uriBuilder_5__2() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2353208 size 0x824 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2353a2c size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerStatusData*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MultiplayerStatusModel*", modifiers: "", def_value: None }, CppParam { name: "_uriBuilder_5__2", ty: "::System::UriBuilder*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
constexpr __MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MultiplayerStatusData*>  __t__builder, ::GlobalNamespace::MultiplayerStatusModel*  __4__this, ::System::UriBuilder*  _uriBuilder_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MultiplayerStatusModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4475))
// CS Name: ::MultiplayerStatusModel*
class CORDL_TYPE MultiplayerStatusModel : public ::System::Object {
public:
// Declarations
using _GetMultiplayerStatusAsyncInternal_d__9 = ::GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9;

using MultiplayerStatusDataFB = ::GlobalNamespace::__MultiplayerStatusModel__MultiplayerStatusDataFB;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field kRequestTimeoutSeconds offset 0x0
static constexpr int32_t  kRequestTimeoutSeconds{static_cast<int32_t>(0x3c)};

/// @brief Field _networkConfig offset 0x10
 __declspec(property(get=__get__networkConfig, put=__set__networkConfig)) ::GlobalNamespace::INetworkConfig*  _networkConfig;

/// @brief Field _client offset 0x18
 __declspec(property(get=__get__client, put=__set__client)) ::System::Net::Http::HttpClient*  _client;

/// @brief Field _request offset 0x20
 __declspec(property(get=__get__request, put=__set__request)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>*  _request;

/// @brief Convert operator to "::GlobalNamespace::IMultiplayerStatusModel"
constexpr operator  ::GlobalNamespace::IMultiplayerStatusModel*() noexcept;

constexpr void __set__networkConfig(::GlobalNamespace::INetworkConfig*  value) ;

constexpr ::GlobalNamespace::INetworkConfig* __get__networkConfig() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkConfig*> __get__networkConfig() const;

constexpr void __set__client(::System::Net::Http::HttpClient*  value) ;

constexpr ::System::Net::Http::HttpClient* __get__client() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpClient*> __get__client() const;

constexpr void __set__request(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* __get__request() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>*> __get__request() const;

/// @brief Method Init addr 0x2352fac size 0x18 virtual false final false
inline void Init() ;

/// @brief Method GetMultiplayerStatusAsync addr 0x2352fdc size 0x6c virtual true final true
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* GetMultiplayerStatusAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method IsAvailabilityTaskValid addr 0x2353048 size 0x5c virtual false final false
inline bool IsAvailabilityTaskValid() ;

/// @brief Method StartRequest addr 0x2352fc4 size 0x18 virtual false final false
inline void StartRequest() ;

/// @brief Method GetMultiplayerStatusAsyncInternal addr 0x23530a4 size 0xf4 virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* GetMultiplayerStatusAsyncInternal() ;

static inline ::GlobalNamespace::MultiplayerStatusModel* New_ctor() ;

/// @brief Method .ctor addr 0x2353198 size 0x68 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerStatusModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerStatusModel(MultiplayerStatusModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerStatusModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerStatusModel(MultiplayerStatusModel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerStatusModel()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerStatusModel, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerStatusModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerStatusModel*, "", "MultiplayerStatusModel");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerStatusModel__MultiplayerStatusDataFB);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerStatusModel__MultiplayerStatusDataFB*, "", "MultiplayerStatusModel/MultiplayerStatusDataFB");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerStatusModel___GetMultiplayerStatusAsyncInternal_d__9, "", "MultiplayerStatusModel/<GetMultiplayerStatusAsyncInternal>d__9");
