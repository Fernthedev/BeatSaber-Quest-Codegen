#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusTestExperiment)
namespace GlobalNamespace {
class __OculusTestExperiment__ExperimentData;
}
namespace GlobalNamespace {
struct __OculusTestExperiment___Init_d__3;
}
namespace GlobalNamespace {
class IExperimentModel;
}
namespace GlobalNamespace {
class IExperimentData;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
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
class OculusTestExperiment;
}
namespace GlobalNamespace {
class __OculusTestExperiment__ExperimentData;
}
namespace GlobalNamespace {
struct __OculusTestExperiment___Init_d__3;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusTestExperiment);
MARK_REF_PTR_T(::GlobalNamespace::__OculusTestExperiment__ExperimentData);
MARK_VAL_T(::GlobalNamespace::__OculusTestExperiment___Init_d__3);
// Type: ::ExperimentData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4188))
// CS Name: ::OculusTestExperiment::ExperimentData*
class CORDL_TYPE __OculusTestExperiment__ExperimentData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _experimentPlatformKey offset 0x10
 __declspec(property(get=__get__experimentPlatformKey, put=__set__experimentPlatformKey)) ::StringW  _experimentPlatformKey;

 __declspec(property(get=get_experimentPlatformKey)) ::StringW  experimentPlatformKey;

/// @brief Convert operator to "::GlobalNamespace::IExperimentData"
constexpr operator  ::GlobalNamespace::IExperimentData*() noexcept;

constexpr void __set__experimentPlatformKey(::StringW  value) ;

constexpr ::StringW& __get__experimentPlatformKey() ;

constexpr ::StringW const& __get__experimentPlatformKey() const;

/// @brief Method get_experimentPlatformKey addr 0x23232a4 size 0x8 virtual true final true
inline ::StringW get_experimentPlatformKey() ;

static inline ::GlobalNamespace::__OculusTestExperiment__ExperimentData* New_ctor(::StringW  experimentPlatformKey) ;

/// @brief Method .ctor addr 0x23232ac size 0x28 virtual false final false
inline void _ctor(::StringW  experimentPlatformKey) ;

// Ctor Parameters [CppParam { name: "", ty: "__OculusTestExperiment__ExperimentData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OculusTestExperiment__ExperimentData(__OculusTestExperiment__ExperimentData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OculusTestExperiment__ExperimentData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OculusTestExperiment__ExperimentData(__OculusTestExperiment__ExperimentData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OculusTestExperiment__ExperimentData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusTestExperiment__ExperimentData, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<Init>d__3
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4189))
// CS Name: ::OculusTestExperiment::<Init>d__3
struct CORDL_TYPE __OculusTestExperiment___Init_d__3 : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::OculusTestExperiment*  __4__this;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::OculusTestExperiment*  value) ;

constexpr ::GlobalNamespace::OculusTestExperiment* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusTestExperiment*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x23232d4 size 0x470 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2323744 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OculusTestExperiment*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
constexpr __OculusTestExperiment___Init_d__3(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::OculusTestExperiment*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OculusTestExperiment___Init_d__3(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OculusTestExperiment___Init_d__3()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusTestExperiment___Init_d__3, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OculusTestExperiment
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4190))
// CS Name: ::OculusTestExperiment*
class CORDL_TYPE OculusTestExperiment : public ::System::Object {
public:
// Declarations
using _Init_d__3 = ::GlobalNamespace::__OculusTestExperiment___Init_d__3;

using ExperimentData = ::GlobalNamespace::__OculusTestExperiment__ExperimentData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field kIsInTest1Key offset 0x0
static constexpr ::ConstString  kIsInTest1Key{u"beatsaber_experiments:test_parameter"};

/// @brief Field _experimentModel offset 0x10
 __declspec(property(get=__get__experimentModel, put=__set__experimentModel)) ::GlobalNamespace::IExperimentModel*  _experimentModel;

constexpr void __set__experimentModel(::GlobalNamespace::IExperimentModel*  value) ;

constexpr ::GlobalNamespace::IExperimentModel* __get__experimentModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IExperimentModel*> __get__experimentModel() const;

/// @brief Method Init addr 0x2323208 size 0x94 virtual false final false
inline void Init() ;

static inline ::GlobalNamespace::OculusTestExperiment* New_ctor() ;

/// @brief Method .ctor addr 0x232329c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OculusTestExperiment", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OculusTestExperiment(OculusTestExperiment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OculusTestExperiment", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OculusTestExperiment(OculusTestExperiment const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OculusTestExperiment()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusTestExperiment, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusTestExperiment);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusTestExperiment*, "", "OculusTestExperiment");
NEED_NO_BOX(::GlobalNamespace::__OculusTestExperiment__ExperimentData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusTestExperiment__ExperimentData*, "", "OculusTestExperiment/ExperimentData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusTestExperiment___Init_d__3, "", "OculusTestExperiment/<Init>d__3");
