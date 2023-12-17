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
CORDL_MODULE_EXPORT(QuickPlaySetupModel)
namespace GlobalNamespace {
struct __QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class __QuickPlaySetupModel__QuickPlaySetupDataFB;
}
namespace System::Net::Http {
class HttpClient;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class IQuickPlaySetupModel;
}
namespace System {
struct DateTime;
}
namespace GlobalNamespace {
class QuickPlaySetupData;
}
namespace GlobalNamespace {
class INetworkConfig;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System {
class UriBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
class QuickPlaySetupModel;
}
namespace GlobalNamespace {
class __QuickPlaySetupModel__QuickPlaySetupDataFB;
}
namespace GlobalNamespace {
struct __QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::QuickPlaySetupModel);
MARK_REF_PTR_T(::GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB);
MARK_VAL_T(::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10);
// Type: ::QuickPlaySetupDataFB
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4481))
// CS Name: ::QuickPlaySetupModel::QuickPlaySetupDataFB*
class CORDL_TYPE __QuickPlaySetupModel__QuickPlaySetupDataFB : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field data offset 0x10
 __declspec(property(get=__get_data, put=__set_data)) ::ArrayW<::GlobalNamespace::QuickPlaySetupData*,::Array<::GlobalNamespace::QuickPlaySetupData*>*>  data;

constexpr void __set_data(::ArrayW<::GlobalNamespace::QuickPlaySetupData*,::Array<::GlobalNamespace::QuickPlaySetupData*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::QuickPlaySetupData*,::Array<::GlobalNamespace::QuickPlaySetupData*>*>& __get_data() ;

constexpr ::ArrayW<::GlobalNamespace::QuickPlaySetupData*,::Array<::GlobalNamespace::QuickPlaySetupData*>*> const& __get_data() const;

static inline ::GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB* New_ctor() ;

/// @brief Method .ctor addr 0x2353fe4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__QuickPlaySetupModel__QuickPlaySetupDataFB", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__QuickPlaySetupModel__QuickPlaySetupDataFB(__QuickPlaySetupModel__QuickPlaySetupDataFB && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__QuickPlaySetupModel__QuickPlaySetupDataFB", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__QuickPlaySetupModel__QuickPlaySetupDataFB(__QuickPlaySetupModel__QuickPlaySetupDataFB const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __QuickPlaySetupModel__QuickPlaySetupDataFB()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<GetQuickPlaySetupInternal>d__10
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4482))
// CS Name: ::QuickPlaySetupModel::<GetQuickPlaySetupInternal>d__10
struct CORDL_TYPE __QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10 : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::QuickPlaySetupData*>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::QuickPlaySetupModel*  __4__this;

/// @brief Field <uriBuilder>5__2 offset 0x28
 __declspec(property(get=__get__uriBuilder_5__2, put=__set__uriBuilder_5__2)) ::System::UriBuilder*  _uriBuilder_5__2;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::QuickPlaySetupData*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::QuickPlaySetupData*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::QuickPlaySetupData*> const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::QuickPlaySetupModel*  value) ;

constexpr ::GlobalNamespace::QuickPlaySetupModel* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::QuickPlaySetupModel*> __get___4__this() const;

constexpr void __set__uriBuilder_5__2(::System::UriBuilder*  value) ;

constexpr ::System::UriBuilder* __get__uriBuilder_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::UriBuilder*> __get__uriBuilder_5__2() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2353fec size 0x7fc virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x23547e8 size 0x1058 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::QuickPlaySetupData*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::QuickPlaySetupModel*", modifiers: "", def_value: None }, CppParam { name: "_uriBuilder_5__2", ty: "::System::UriBuilder*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
constexpr __QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::QuickPlaySetupData*>  __t__builder, ::GlobalNamespace::QuickPlaySetupModel*  __4__this, ::System::UriBuilder*  _uriBuilder_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::QuickPlaySetupModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4483))
// CS Name: ::QuickPlaySetupModel*
class CORDL_TYPE QuickPlaySetupModel : public ::System::Object {
public:
// Declarations
using _GetQuickPlaySetupInternal_d__10 = ::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10;

using QuickPlaySetupDataFB = ::GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field kRequestCacheTimeoutMinutes offset 0x0
static constexpr int32_t  kRequestCacheTimeoutMinutes{static_cast<int32_t>(0x5)};

/// @brief Field kRequestTimeoutSeconds offset 0x0
static constexpr int32_t  kRequestTimeoutSeconds{static_cast<int32_t>(0x3c)};

/// @brief Field _networkConfig offset 0x10
 __declspec(property(get=__get__networkConfig, put=__set__networkConfig)) ::GlobalNamespace::INetworkConfig*  _networkConfig;

/// @brief Field _client offset 0x18
 __declspec(property(get=__get__client, put=__set__client)) ::System::Net::Http::HttpClient*  _client;

/// @brief Field _request offset 0x20
 __declspec(property(get=__get__request, put=__set__request)) ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>*  _request;

/// @brief Field _lastRequestTime offset 0x28
 __declspec(property(get=__get__lastRequestTime, put=__set__lastRequestTime)) ::System::DateTime  _lastRequestTime;

/// @brief Convert operator to "::GlobalNamespace::IQuickPlaySetupModel"
constexpr operator  ::GlobalNamespace::IQuickPlaySetupModel*() noexcept;

constexpr void __set__networkConfig(::GlobalNamespace::INetworkConfig*  value) ;

constexpr ::GlobalNamespace::INetworkConfig* __get__networkConfig() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkConfig*> __get__networkConfig() const;

constexpr void __set__client(::System::Net::Http::HttpClient*  value) ;

constexpr ::System::Net::Http::HttpClient* __get__client() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::HttpClient*> __get__client() const;

constexpr void __set__request(::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>*  value) ;

constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* __get__request() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>*> __get__request() const;

constexpr void __set__lastRequestTime(::System::DateTime  value) ;

constexpr ::System::DateTime& __get__lastRequestTime() ;

constexpr ::System::DateTime const& __get__lastRequestTime() const;

/// @brief Method GetQuickPlaySetupAsync addr 0x2353c64 size 0x64 virtual true final true
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* GetQuickPlaySetupAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Init addr 0x2353e28 size 0x4 virtual false final false
inline void Init() ;

/// @brief Method StartRequest addr 0x2353dc0 size 0x68 virtual false final false
inline void StartRequest() ;

/// @brief Method GetQuickPlaySetupInternal addr 0x2353e2c size 0xf4 virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* GetQuickPlaySetupInternal() ;

/// @brief Method IsQuickPlaySetupTaskValid addr 0x2353cc8 size 0xf8 virtual false final false
inline bool IsQuickPlaySetupTaskValid() ;

/// @brief Method IsUrlValid addr 0x2353f20 size 0x5c virtual false final false
inline bool IsUrlValid(::StringW  url) ;

static inline ::GlobalNamespace::QuickPlaySetupModel* New_ctor() ;

/// @brief Method .ctor addr 0x2353f7c size 0x68 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "QuickPlaySetupModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QuickPlaySetupModel(QuickPlaySetupModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuickPlaySetupModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuickPlaySetupModel(QuickPlaySetupModel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 QuickPlaySetupModel()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuickPlaySetupModel, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::QuickPlaySetupModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickPlaySetupModel*, "", "QuickPlaySetupModel");
NEED_NO_BOX(::GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__QuickPlaySetupModel__QuickPlaySetupDataFB*, "", "QuickPlaySetupModel/QuickPlaySetupDataFB");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__QuickPlaySetupModel___GetQuickPlaySetupInternal_d__10, "", "QuickPlaySetupModel/<GetQuickPlaySetupInternal>d__10");
