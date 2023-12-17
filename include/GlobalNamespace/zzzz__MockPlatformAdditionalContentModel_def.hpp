#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MockPlatformAdditionalContentModel)
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
struct __MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
struct IsPackBetterBuyThanLevelResult;
}
namespace GlobalNamespace {
struct OpenProductStoreResult;
}
namespace GlobalNamespace {
class MockPlatformEntitlement;
}
namespace GlobalNamespace {
class MockPlatformAdditionalContentModelInitialDataSO;
}
namespace GlobalNamespace {
class AlwaysOwnedContentContainerSO;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct __YieldAwaitable__YieldAwaiter;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlatformAdditionalContentModel;
}
namespace GlobalNamespace {
struct __MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlatformAdditionalContentModel);
MARK_VAL_T(::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8);
// Type: ::<OpenLevelProductStoreAsync>d__8
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4103))
// CS Name: ::MockPlatformAdditionalContentModel::<OpenLevelProductStoreAsync>d__8
struct CORDL_TYPE __MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8 : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>  __t__builder;

/// @brief Field token offset 0x20
 __declspec(property(get=__get_token, put=__set_token)) ::System::Threading::CancellationToken  token;

/// @brief Field levelId offset 0x28
 __declspec(property(get=__get_levelId, put=__set_levelId)) ::StringW  levelId;

/// @brief Field <>4__this offset 0x30
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::MockPlatformAdditionalContentModel*  __4__this;

/// @brief Field <>u__1 offset 0x38
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult> const& __get___t__builder() const;

constexpr void __set_token(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_token() ;

constexpr ::System::Threading::CancellationToken const& __get_token() const;

constexpr void __set_levelId(::StringW  value) ;

constexpr ::StringW& __get_levelId() ;

constexpr ::StringW const& __get_levelId() const;

constexpr void __set___4__this(::GlobalNamespace::MockPlatformAdditionalContentModel*  value) ;

constexpr ::GlobalNamespace::MockPlatformAdditionalContentModel* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MockPlatformAdditionalContentModel*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2234f78 size 0x274 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22351ec size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>", modifiers: "", def_value: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MockPlatformAdditionalContentModel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter", modifiers: "", def_value: None }]
constexpr __MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::OpenProductStoreResult>  __t__builder, ::System::Threading::CancellationToken  token, ::StringW  levelId, ::GlobalNamespace::MockPlatformAdditionalContentModel*  __4__this, ::System::Runtime::CompilerServices::__YieldAwaitable__YieldAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MockPlatformAdditionalContentModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4100))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4104))
// CS Name: ::MockPlatformAdditionalContentModel*
class CORDL_TYPE MockPlatformAdditionalContentModel : public ::GlobalNamespace::AdditionalContentModel {
public:
// Declarations
using _OpenLevelProductStoreAsync_d__8 = ::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::GlobalNamespace::AdditionalContentModel)]{};

/// @brief Field _levelsEntitlements offset 0x28
 __declspec(property(get=__get__levelsEntitlements, put=__set__levelsEntitlements)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MockPlatformEntitlement*>*  _levelsEntitlements;

/// @brief Field _levelPacksEntitlements offset 0x30
 __declspec(property(get=__get__levelPacksEntitlements, put=__set__levelPacksEntitlements)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MockPlatformEntitlement*>*  _levelPacksEntitlements;

/// @brief Field _packBetterBuyThanLevel offset 0x38
 __declspec(property(get=__get__packBetterBuyThanLevel, put=__set__packBetterBuyThanLevel)) bool  _packBetterBuyThanLevel;

constexpr void __set__levelsEntitlements(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MockPlatformEntitlement*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MockPlatformEntitlement*>* __get__levelsEntitlements() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MockPlatformEntitlement*>*> __get__levelsEntitlements() const;

constexpr void __set__levelPacksEntitlements(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MockPlatformEntitlement*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MockPlatformEntitlement*>* __get__levelPacksEntitlements() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MockPlatformEntitlement*>*> __get__levelPacksEntitlements() const;

constexpr void __set__packBetterBuyThanLevel(bool  value) ;

constexpr bool& __get__packBetterBuyThanLevel() ;

constexpr bool const& __get__packBetterBuyThanLevel() const;

static inline ::GlobalNamespace::MockPlatformAdditionalContentModel* New_ctor(::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*  mockPlatformAdditionalContentModelInitialData, ::GlobalNamespace::AlwaysOwnedContentContainerSO*  alwaysOwnedContentContainer) ;

/// @brief Method .ctor addr 0x223440c size 0x618 virtual false final false
inline void _ctor(::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*  mockPlatformAdditionalContentModelInitialData, ::GlobalNamespace::AlwaysOwnedContentContainerSO*  alwaysOwnedContentContainer) ;

/// @brief Method InvalidateDataInternal addr 0x2234a24 size 0x4 virtual true final false
inline void InvalidateDataInternal() ;

/// @brief Method GetLevelEntitlementStatusInternalAsync addr 0x2234a28 size 0xd8 virtual true final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetLevelEntitlementStatusInternalAsync(::StringW  levelId, ::System::Threading::CancellationToken  token) ;

/// @brief Method GetPackEntitlementStatusInternalAsync addr 0x2234b00 size 0xd8 virtual true final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* GetPackEntitlementStatusInternalAsync(::StringW  levelPackId, ::System::Threading::CancellationToken  token) ;

/// @brief Method IsPackBetterBuyThanLevelAsync addr 0x2234bd8 size 0x90 virtual true final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::StringW  levelPackId, ::System::Threading::CancellationToken  token) ;

/// @brief Method OpenLevelProductStoreAsync addr 0x2234c68 size 0x104 virtual true final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelProductStoreAsync(::StringW  levelId, ::System::Threading::CancellationToken  token) ;

/// @brief Method BuyLevel addr 0x2234d6c size 0xec virtual false final false
inline void BuyLevel(::StringW  levelId) ;

/// @brief Method OpenLevelPackProductStoreAsync addr 0x2234e94 size 0xe4 virtual true final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::StringW  levelPackId, ::System::Threading::CancellationToken  token) ;

// Ctor Parameters [CppParam { name: "", ty: "MockPlatformAdditionalContentModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MockPlatformAdditionalContentModel(MockPlatformAdditionalContentModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockPlatformAdditionalContentModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockPlatformAdditionalContentModel(MockPlatformAdditionalContentModel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MockPlatformAdditionalContentModel()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlatformAdditionalContentModel, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlatformAdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlatformAdditionalContentModel*, "", "MockPlatformAdditionalContentModel");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MockPlatformAdditionalContentModel___OpenLevelProductStoreAsync_d__8, "", "MockPlatformAdditionalContentModel/<OpenLevelProductStoreAsync>d__8");
