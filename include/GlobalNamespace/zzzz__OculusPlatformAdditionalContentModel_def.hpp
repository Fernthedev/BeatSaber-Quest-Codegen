#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusPlatformAdditionalContentModel)
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__14;
}
namespace GlobalNamespace {
class __OculusPlatformAdditionalContentModel____c__DisplayClass19_0;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class __OculusLevelProductsModelSO__LevelPackProductData;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__17;
}
namespace GlobalNamespace {
class OculusLevelProductsModelSO;
}
namespace GlobalNamespace {
class __OculusPlatformAdditionalContentModel____c__DisplayClass21_0;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___IsDataValidAsync_d__16;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__10;
}
namespace GlobalNamespace {
struct OpenProductStoreResult;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace Oculus::Platform::Models {
class Purchase;
}
namespace GlobalNamespace {
class AlwaysOwnedContentContainerSO;
}
namespace GlobalNamespace {
class __OculusLevelProductsModelSO__LevelProductData;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace GlobalNamespace {
class __OculusLevelProductsModelSO__LevelPackRedirectionData;
}
namespace Oculus::Platform {
template<typename T>
class Message_1;
}
namespace GlobalNamespace {
struct IsPackBetterBuyThanLevelResult;
}
namespace GlobalNamespace {
struct __AdditionalContentModel__UpdateEntitlementsResult;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__15;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace Oculus::Platform::Models {
class AssetDetailsList;
}
namespace Oculus::Platform {
template<typename T>
class __Message_1__Callback;
}
namespace Oculus::Platform::Models {
class PurchaseList;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusPlatformAdditionalContentModel;
}
namespace GlobalNamespace {
class __OculusPlatformAdditionalContentModel____c__DisplayClass19_0;
}
namespace GlobalNamespace {
class __OculusPlatformAdditionalContentModel____c__DisplayClass21_0;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__14;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__15;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__10;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___IsDataValidAsync_d__16;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18;
}
namespace GlobalNamespace {
struct __OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__17;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusPlatformAdditionalContentModel);
MARK_REF_PTR_T(::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass19_0);
MARK_REF_PTR_T(::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass21_0);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__14);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__15);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__10);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformAdditionalContentModel___IsDataValidAsync_d__16);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18);
MARK_VAL_T(::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__17);
// Type: ::<GetRedirectedLevelPackProductData>d__10
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4107))
// CS Name: ::OculusPlatformAdditionalContentModel::<GetRedirectedLevelPackProductData>d__10
struct CORDL_TYPE __OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__10 : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::OculusPlatformAdditionalContentModel*  __4__this;

/// @brief Field packId offset 0x28
 __declspec(property(get=__get_packId, put=__set_packId)) ::StringW  packId;

/// @brief Field cancellationToken offset 0x30
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <originalPack>5__2 offset 0x38
 __declspec(property(get=__get__originalPack_5__2, put=__set__originalPack_5__2)) ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*  _originalPack_5__2;

/// @brief Field <levelPackRedirectionData>5__3 offset 0x40
 __declspec(property(get=__get__levelPackRedirectionData_5__3, put=__set__levelPackRedirectionData_5__3)) ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData*  _levelPackRedirectionData_5__3;

/// @brief Field <>u__1 offset 0x48
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::OculusPlatformAdditionalContentModel*  value) ;

constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformAdditionalContentModel*> __get___4__this() const;

constexpr void __set_packId(::StringW  value) ;

constexpr ::StringW& __get_packId() ;

constexpr ::StringW const& __get_packId() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set__originalPack_5__2(::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*  value) ;

constexpr ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData* __get__originalPack_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*> __get__originalPack_5__2() const;

constexpr void __set__levelPackRedirectionData_5__3(::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData*  value) ;

constexpr ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData* __get__levelPackRedirectionData_5__3() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData*> __get__levelPackRedirectionData_5__3() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x223628c size 0x2c4 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2236550 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_originalPack_5__2", ty: "::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*", modifiers: "", def_value: None }, CppParam { name: "_levelPackRedirectionData_5__3", ty: "::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
constexpr __OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__10(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::GlobalNamespace::OculusPlatformAdditionalContentModel*  __4__this, ::StringW  packId, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*  _originalPack_5__2, ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData*  _levelPackRedirectionData_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__10(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__10()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__10, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<GetLevelEntitlementStatusInternalAsync>d__14
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4108))
// CS Name: ::OculusPlatformAdditionalContentModel::<GetLevelEntitlementStatusInternalAsync>d__14
struct CORDL_TYPE __OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__14 : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::OculusPlatformAdditionalContentModel*  __4__this;

/// @brief Field cancellationToken offset 0x28
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field levelId offset 0x30
 __declspec(property(get=__get_levelId, put=__set_levelId)) ::StringW  levelId;

/// @brief Field <>u__1 offset 0x38
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::OculusPlatformAdditionalContentModel*  value) ;

constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformAdditionalContentModel*> __get___4__this() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set_levelId(::StringW  value) ;

constexpr ::StringW& __get_levelId() ;

constexpr ::StringW const& __get_levelId() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x22365a8 size 0x210 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22367b8 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr __OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__14(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>  __t__builder, ::GlobalNamespace::OculusPlatformAdditionalContentModel*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::StringW  levelId, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__14(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__14()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__14, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<GetPackEntitlementStatusInternalAsync>d__15
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4109))
// CS Name: ::OculusPlatformAdditionalContentModel::<GetPackEntitlementStatusInternalAsync>d__15
struct CORDL_TYPE __OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__15 : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::OculusPlatformAdditionalContentModel*  __4__this;

/// @brief Field cancellationToken offset 0x28
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field packId offset 0x30
 __declspec(property(get=__get_packId, put=__set_packId)) ::StringW  packId;

/// @brief Field <>u__1 offset 0x38
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus> const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::OculusPlatformAdditionalContentModel*  value) ;

constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformAdditionalContentModel*> __get___4__this() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set_packId(::StringW  value) ;

constexpr ::StringW& __get_packId() ;

constexpr ::StringW const& __get_packId() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2236810 size 0x210 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2236a20 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "packId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr __OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__15(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::EntitlementStatus>  __t__builder, ::GlobalNamespace::OculusPlatformAdditionalContentModel*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::StringW  packId, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__15(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__15()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__15, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<IsDataValidAsync>d__16
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4110))
// CS Name: ::OculusPlatformAdditionalContentModel::<IsDataValidAsync>d__16
struct CORDL_TYPE __OculusPlatformAdditionalContentModel___IsDataValidAsync_d__16 : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::OculusPlatformAdditionalContentModel*  __4__this;

/// @brief Field cancellationToken offset 0x28
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <>u__2 offset 0x38
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>  __u__2;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::OculusPlatformAdditionalContentModel*  value) ;

constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformAdditionalContentModel*> __get___4__this() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__1() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult> const& __get___u__2() const;

/// @brief Method MoveNext addr 0x2236a78 size 0x3b8 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2236e30 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: None }]
constexpr __OculusPlatformAdditionalContentModel___IsDataValidAsync_d__16(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::GlobalNamespace::OculusPlatformAdditionalContentModel*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>  __u__2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OculusPlatformAdditionalContentModel___IsDataValidAsync_d__16(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OculusPlatformAdditionalContentModel___IsDataValidAsync_d__16()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAdditionalContentModel___IsDataValidAsync_d__16, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<OpenLevelProductStoreAsync>d__17
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4111))
// CS Name: ::OculusPlatformAdditionalContentModel::<OpenLevelProductStoreAsync>d__17
struct CORDL_TYPE __OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__17 : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::OculusPlatformAdditionalContentModel*  __4__this;

/// @brief Field levelId offset 0x28
 __declspec(property(get=__get_levelId, put=__set_levelId)) ::StringW  levelId;

/// @brief Field cancellationToken offset 0x30
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1 offset 0x38
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::OculusPlatformAdditionalContentModel*  value) ;

constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformAdditionalContentModel*> __get___4__this() const;

constexpr void __set_levelId(::StringW  value) ;

constexpr ::StringW& __get_levelId() ;

constexpr ::StringW const& __get_levelId() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2236e88 size 0x33c virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22371c4 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>", modifiers: "", def_value: None }]
constexpr __OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__17(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>  __t__builder, ::GlobalNamespace::OculusPlatformAdditionalContentModel*  __4__this, ::StringW  levelId, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__17(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__17()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__17, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<OpenLevelPackProductStoreAsync>d__18
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4112))
// CS Name: ::OculusPlatformAdditionalContentModel::<OpenLevelPackProductStoreAsync>d__18
struct CORDL_TYPE __OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18 : public ::bs_hook::ValueTypeWrapper<0x48> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::OculusPlatformAdditionalContentModel*  __4__this;

/// @brief Field levelPackId offset 0x28
 __declspec(property(get=__get_levelPackId, put=__set_levelPackId)) ::StringW  levelPackId;

/// @brief Field cancellationToken offset 0x30
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1 offset 0x38
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1;

/// @brief Field <>u__2 offset 0x40
 __declspec(property(get=__get___u__2, put=__set___u__2)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>  __u__2;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::OculusPlatformAdditionalContentModel*  value) ;

constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformAdditionalContentModel*> __get___4__this() const;

constexpr void __set_levelPackId(::StringW  value) ;

constexpr ::StringW& __get_levelPackId() ;

constexpr ::StringW const& __get_levelPackId() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> const& __get___u__1() const;

constexpr void __set___u__2(::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>& __get___u__2() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*> const& __get___u__2() const;

/// @brief Method MoveNext addr 0x223721c size 0x46c virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2237688 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>", modifiers: "", def_value: None }]
constexpr __OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>  __t__builder, ::GlobalNamespace::OculusPlatformAdditionalContentModel*  __4__this, ::StringW  levelPackId, ::System::Threading::CancellationToken  cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>  __u__2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x48>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass19_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4113))
// CS Name: ::OculusPlatformAdditionalContentModel::<>c__DisplayClass19_0*
class CORDL_TYPE __OculusPlatformAdditionalContentModel____c__DisplayClass19_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field launchCheckoutFlowTaskSource offset 0x10
 __declspec(property(get=__get_launchCheckoutFlowTaskSource, put=__set_launchCheckoutFlowTaskSource)) ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>*  launchCheckoutFlowTaskSource;

constexpr void __set_launchCheckoutFlowTaskSource(::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>* __get_launchCheckoutFlowTaskSource() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>*> __get_launchCheckoutFlowTaskSource() const;

static inline ::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass19_0* New_ctor() ;

/// @brief Method .ctor addr 0x2235f98 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <LaunchCheckoutFlow>b__0 addr 0x22376e0 size 0x58 virtual false final false
inline void _LaunchCheckoutFlow_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*  msg) ;

// Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformAdditionalContentModel____c__DisplayClass19_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OculusPlatformAdditionalContentModel____c__DisplayClass19_0(__OculusPlatformAdditionalContentModel____c__DisplayClass19_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformAdditionalContentModel____c__DisplayClass19_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OculusPlatformAdditionalContentModel____c__DisplayClass19_0(__OculusPlatformAdditionalContentModel____c__DisplayClass19_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OculusPlatformAdditionalContentModel____c__DisplayClass19_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass19_0, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass21_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4114))
// CS Name: ::OculusPlatformAdditionalContentModel::<>c__DisplayClass21_0*
class CORDL_TYPE __OculusPlatformAdditionalContentModel____c__DisplayClass21_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field cancellationToken offset 0x10
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field getViewerPurchasesTaskSource offset 0x18
 __declspec(property(get=__get_getViewerPurchasesTaskSource, put=__set_getViewerPurchasesTaskSource)) ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>*  getViewerPurchasesTaskSource;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::OculusPlatformAdditionalContentModel*  __4__this;

/// @brief Field <>9__1 offset 0x28
 __declspec(property(get=__get___9__1, put=__set___9__1)) ::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::PurchaseList*>*  __9__1;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set_getViewerPurchasesTaskSource(::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>* __get_getViewerPurchasesTaskSource() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>*> __get_getViewerPurchasesTaskSource() const;

constexpr void __set___4__this(::GlobalNamespace::OculusPlatformAdditionalContentModel*  value) ;

constexpr ::GlobalNamespace::OculusPlatformAdditionalContentModel* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformAdditionalContentModel*> __get___4__this() const;

constexpr void __set___9__1(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::PurchaseList*>*  value) ;

constexpr ::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::PurchaseList*>* __get___9__1() ;

constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::PurchaseList*>*> __get___9__1() const;

static inline ::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass21_0* New_ctor() ;

/// @brief Method .ctor addr 0x2236154 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <CheckForNewEntitlementsAsync>b__0 addr 0x2237738 size 0x518 virtual false final false
inline void _CheckForNewEntitlementsAsync_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetDetailsList*>*  getListMsg) ;

/// @brief Method <CheckForNewEntitlementsAsync>b__1 addr 0x2237c50 size 0x38c virtual false final false
inline void _CheckForNewEntitlementsAsync_b__1(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*>*  getPurchasesMsg) ;

// Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformAdditionalContentModel____c__DisplayClass21_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OculusPlatformAdditionalContentModel____c__DisplayClass21_0(__OculusPlatformAdditionalContentModel____c__DisplayClass21_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OculusPlatformAdditionalContentModel____c__DisplayClass21_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OculusPlatformAdditionalContentModel____c__DisplayClass21_0(__OculusPlatformAdditionalContentModel____c__DisplayClass21_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OculusPlatformAdditionalContentModel____c__DisplayClass21_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass21_0, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OculusPlatformAdditionalContentModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4100))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4115))
// CS Name: ::OculusPlatformAdditionalContentModel*
class CORDL_TYPE OculusPlatformAdditionalContentModel : public ::GlobalNamespace::AdditionalContentModel {
public:
// Declarations
using __c__DisplayClass21_0 = ::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass21_0;

using __c__DisplayClass19_0 = ::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass19_0;

using _OpenLevelPackProductStoreAsync_d__18 = ::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18;

using _OpenLevelProductStoreAsync_d__17 = ::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__17;

using _IsDataValidAsync_d__16 = ::GlobalNamespace::__OculusPlatformAdditionalContentModel___IsDataValidAsync_d__16;

using _GetPackEntitlementStatusInternalAsync_d__15 = ::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__15;

using _GetLevelEntitlementStatusInternalAsync_d__14 = ::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__14;

using _GetRedirectedLevelPackProductData_d__10 = ::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__10;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::GlobalNamespace::AdditionalContentModel)]{};

/// @brief Field _entitlementsSKU offset 0x28
 __declspec(property(get=__get__entitlementsSKU, put=__set__entitlementsSKU)) ::System::Collections::Generic::HashSet_1<::StringW>*  _entitlementsSKU;

/// @brief Field _semaphoreSlim offset 0x30
 __declspec(property(get=__get__semaphoreSlim, put=__set__semaphoreSlim)) ::System::Threading::SemaphoreSlim*  _semaphoreSlim;

/// @brief Field _isDataValid offset 0x38
 __declspec(property(get=__get__isDataValid, put=__set__isDataValid)) bool  _isDataValid;

/// @brief Field _levelIdToProductData offset 0x40
 __declspec(property(get=__get__levelIdToProductData, put=__set__levelIdToProductData)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*>*  _levelIdToProductData;

/// @brief Field _levelPackIdToProductData offset 0x48
 __declspec(property(get=__get__levelPackIdToProductData, put=__set__levelPackIdToProductData)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*>*  _levelPackIdToProductData;

/// @brief Field _levelPackRedirectionData offset 0x50
 __declspec(property(get=__get__levelPackRedirectionData, put=__set__levelPackRedirectionData)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData*>*  _levelPackRedirectionData;

/// @brief Field _assetFileToSku offset 0x58
 __declspec(property(get=__get__assetFileToSku, put=__set__assetFileToSku)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _assetFileToSku;

constexpr void __set__entitlementsSKU(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* __get__entitlementsSKU() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> __get__entitlementsSKU() const;

constexpr void __set__semaphoreSlim(::System::Threading::SemaphoreSlim*  value) ;

constexpr ::System::Threading::SemaphoreSlim* __get__semaphoreSlim() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> __get__semaphoreSlim() const;

constexpr void __set__isDataValid(bool  value) ;

constexpr bool& __get__isDataValid() ;

constexpr bool const& __get__isDataValid() const;

constexpr void __set__levelIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*>* __get__levelIdToProductData() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData*>*> __get__levelIdToProductData() const;

constexpr void __set__levelPackIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*>* __get__levelPackIdToProductData() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData*>*> __get__levelPackIdToProductData() const;

constexpr void __set__levelPackRedirectionData(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData*>* __get__levelPackRedirectionData() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData*>*> __get__levelPackRedirectionData() const;

constexpr void __set__assetFileToSku(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* __get__assetFileToSku() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*> __get__assetFileToSku() const;

static inline ::GlobalNamespace::OculusPlatformAdditionalContentModel* New_ctor(::GlobalNamespace::OculusLevelProductsModelSO*  oculusLevelProductsModel, ::GlobalNamespace::AlwaysOwnedContentContainerSO*  alwaysOwnedContentContainer) ;

/// @brief Method .ctor addr 0x223527c size 0x3d4 virtual false final false
inline void _ctor(::GlobalNamespace::OculusLevelProductsModelSO*  oculusLevelProductsModel, ::GlobalNamespace::AlwaysOwnedContentContainerSO*  alwaysOwnedContentContainer) ;

/// @brief Method GetLevelProductData addr 0x2235650 size 0x78 virtual false final false
inline ::GlobalNamespace::__OculusLevelProductsModelSO__LevelProductData* GetLevelProductData(::StringW  levelId) ;

/// @brief Method GetLevelPackProductData addr 0x22356c8 size 0x78 virtual false final false
inline ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackProductData* GetLevelPackProductData(::StringW  levelPackId) ;

/// @brief Method GetRedirectedLevelPackProductData addr 0x2235740 size 0x108 virtual false final false
inline ::System::Threading::Tasks::Task_1<::StringW>* GetRedirectedLevelPackProductData(::StringW  packId, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetLevelPackRedirectionData addr 0x2235848 size 0x78 virtual false final false
inline ::GlobalNamespace::__OculusLevelProductsModelSO__LevelPackRedirectionData* GetLevelPackRedirectionData(::StringW  levelPackId) ;

/// @brief Method GetLevelSku addr 0x22358c0 size 0x78 virtual false final false
inline ::StringW GetLevelSku(::StringW  assetFile) ;

/// @brief Method InvalidateDataInternal addr 0x2235938 size 0x8 virtual true final false
inline void InvalidateDataInternal() ;

/// @brief Method GetLevelEntitlementStatusInternalAsync addr 0x2235940 size 0x104 virtual true final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetLevelEntitlementStatusInternalAsync(::StringW  levelId, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetPackEntitlementStatusInternalAsync addr 0x2235a44 size 0x104 virtual true final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetPackEntitlementStatusInternalAsync(::StringW  packId, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method IsDataValidAsync addr 0x2235b48 size 0x100 virtual false final false
inline ::System::Threading::Tasks::Task_1<bool>* IsDataValidAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OpenLevelProductStoreAsync addr 0x2235c48 size 0x104 virtual true final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelProductStoreAsync(::StringW  levelId, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OpenLevelPackProductStoreAsync addr 0x2235d4c size 0x108 virtual true final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::StringW  levelPackId, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method LaunchCheckoutFlow addr 0x2235e54 size 0x144 virtual false final false
static inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>* LaunchCheckoutFlow(::StringW  sku) ;

/// @brief Method IsPackBetterBuyThanLevelAsync addr 0x2235fa0 size 0x68 virtual true final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::StringW  levelPackId, ::System::Threading::CancellationToken  token) ;

/// @brief Method CheckForNewEntitlementsAsync addr 0x2236008 size 0x14c virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AdditionalContentModel__UpdateEntitlementsResult>* CheckForNewEntitlementsAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method HasLevelEntitlement addr 0x223615c size 0x6c virtual false final false
inline bool HasLevelEntitlement(::StringW  levelId) ;

/// @brief Method HasLevelPackEntitlement addr 0x22361c8 size 0xc4 virtual false final false
inline bool HasLevelPackEntitlement(::StringW  levelPackId) ;

// Ctor Parameters [CppParam { name: "", ty: "OculusPlatformAdditionalContentModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OculusPlatformAdditionalContentModel(OculusPlatformAdditionalContentModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OculusPlatformAdditionalContentModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OculusPlatformAdditionalContentModel(OculusPlatformAdditionalContentModel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OculusPlatformAdditionalContentModel()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformAdditionalContentModel, 0x60>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusPlatformAdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformAdditionalContentModel*, "", "OculusPlatformAdditionalContentModel");
NEED_NO_BOX(::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass19_0*, "", "OculusPlatformAdditionalContentModel/<>c__DisplayClass19_0");
NEED_NO_BOX(::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAdditionalContentModel____c__DisplayClass21_0*, "", "OculusPlatformAdditionalContentModel/<>c__DisplayClass21_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetLevelEntitlementStatusInternalAsync_d__14, "", "OculusPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__14");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetPackEntitlementStatusInternalAsync_d__15, "", "OculusPlatformAdditionalContentModel/<GetPackEntitlementStatusInternalAsync>d__15");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAdditionalContentModel___GetRedirectedLevelPackProductData_d__10, "", "OculusPlatformAdditionalContentModel/<GetRedirectedLevelPackProductData>d__10");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAdditionalContentModel___IsDataValidAsync_d__16, "", "OculusPlatformAdditionalContentModel/<IsDataValidAsync>d__16");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelPackProductStoreAsync_d__18, "", "OculusPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__18");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__17, "", "OculusPlatformAdditionalContentModel/<OpenLevelProductStoreAsync>d__17");
