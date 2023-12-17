#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FlowCoordinator)
namespace HMUI {
class __FlowCoordinator____c__DisplayClass42_0;
}
namespace HMUI {
class __FlowCoordinator____c__DisplayClass49_0;
}
namespace HMUI {
class ViewController;
}
namespace HMUI {
class ScreenSystem;
}
namespace HMUI {
class __FlowCoordinator____c__DisplayClass37_0;
}
namespace HMUI {
class NavigationController;
}
namespace HMUI {
struct __ViewController__AnimationDirection;
}
namespace HMUI {
class __FlowCoordinator____c__DisplayClass50_0;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace System {
class Action;
}
namespace UnityEngine::EventSystems {
class BaseInputModule;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HMUI {
struct __FlowCoordinator___DismissChildViewControllersRecursively_d__40;
}
namespace HMUI {
class __FlowCoordinator____c__DisplayClass46_0;
}
namespace HMUI {
class __FlowCoordinator____c__DisplayClass41_0;
}
namespace HMUI {
class __FlowCoordinator____c__DisplayClass43_0;
}
namespace HMUI {
class __FlowCoordinator____c__DisplayClass45_0;
}
namespace HMUI {
struct __FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39;
}
namespace HMUI {
struct __ViewController__AnimationType;
}
namespace System::Threading::Tasks {
class Task;
}
namespace HMUI {
class __FlowCoordinator____c__DisplayClass38_0;
}
namespace System {
class Object;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace HMUI {
class FlowCoordinator;
}
namespace HMUI {
class __FlowCoordinator____c__DisplayClass37_0;
}
namespace HMUI {
class __FlowCoordinator____c__DisplayClass38_0;
}
namespace HMUI {
class __FlowCoordinator____c__DisplayClass41_0;
}
namespace HMUI {
class __FlowCoordinator____c__DisplayClass42_0;
}
namespace HMUI {
class __FlowCoordinator____c__DisplayClass43_0;
}
namespace HMUI {
class __FlowCoordinator____c__DisplayClass45_0;
}
namespace HMUI {
class __FlowCoordinator____c__DisplayClass46_0;
}
namespace HMUI {
class __FlowCoordinator____c__DisplayClass49_0;
}
namespace HMUI {
class __FlowCoordinator____c__DisplayClass50_0;
}
namespace HMUI {
struct __FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39;
}
namespace HMUI {
struct __FlowCoordinator___DismissChildViewControllersRecursively_d__40;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::FlowCoordinator);
MARK_REF_PTR_T(::HMUI::__FlowCoordinator____c__DisplayClass37_0);
MARK_REF_PTR_T(::HMUI::__FlowCoordinator____c__DisplayClass38_0);
MARK_REF_PTR_T(::HMUI::__FlowCoordinator____c__DisplayClass41_0);
MARK_REF_PTR_T(::HMUI::__FlowCoordinator____c__DisplayClass42_0);
MARK_REF_PTR_T(::HMUI::__FlowCoordinator____c__DisplayClass43_0);
MARK_REF_PTR_T(::HMUI::__FlowCoordinator____c__DisplayClass45_0);
MARK_REF_PTR_T(::HMUI::__FlowCoordinator____c__DisplayClass46_0);
MARK_REF_PTR_T(::HMUI::__FlowCoordinator____c__DisplayClass49_0);
MARK_REF_PTR_T(::HMUI::__FlowCoordinator____c__DisplayClass50_0);
MARK_VAL_T(::HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39);
MARK_VAL_T(::HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40);
// Type: ::<>c__DisplayClass37_0
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13571))
// CS Name: ::FlowCoordinator::<>c__DisplayClass37_0*
class CORDL_TYPE __FlowCoordinator____c__DisplayClass37_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field finishedCallback offset 0x10
 __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback)) ::System::Action*  finishedCallback;

/// @brief Field flowCoordinator offset 0x18
 __declspec(property(get=__get_flowCoordinator, put=__set_flowCoordinator)) ::HMUI::FlowCoordinator*  flowCoordinator;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::HMUI::FlowCoordinator*  __4__this;

constexpr void __set_finishedCallback(::System::Action*  value) ;

constexpr ::System::Action* __get_finishedCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_finishedCallback() const;

constexpr void __set_flowCoordinator(::HMUI::FlowCoordinator*  value) ;

constexpr ::HMUI::FlowCoordinator* __get_flowCoordinator() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> __get_flowCoordinator() const;

constexpr void __set___4__this(::HMUI::FlowCoordinator*  value) ;

constexpr ::HMUI::FlowCoordinator* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> __get___4__this() const;

static inline ::HMUI::__FlowCoordinator____c__DisplayClass37_0* New_ctor() ;

/// @brief Method .ctor addr 0x2127650 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <PresentFlowCoordinator>b__1 addr 0x2128dc4 size 0x78 virtual false final false
inline void _PresentFlowCoordinator_b__1() ;

/// @brief Method <PresentFlowCoordinator>b__0 addr 0x2128e3c size 0x78 virtual false final false
inline void _PresentFlowCoordinator_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__FlowCoordinator____c__DisplayClass37_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FlowCoordinator____c__DisplayClass37_0(__FlowCoordinator____c__DisplayClass37_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FlowCoordinator____c__DisplayClass37_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FlowCoordinator____c__DisplayClass37_0(__FlowCoordinator____c__DisplayClass37_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FlowCoordinator____c__DisplayClass37_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__FlowCoordinator____c__DisplayClass37_0, 0x28>, "Size mismatch!");

} // namespace end def HMUI
// Type: ::<>c__DisplayClass38_0
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13572))
// CS Name: ::FlowCoordinator::<>c__DisplayClass38_0*
class CORDL_TYPE __FlowCoordinator____c__DisplayClass38_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field immediately offset 0x10
 __declspec(property(get=__get_immediately, put=__set_immediately)) bool  immediately;

/// @brief Field <>4__this offset 0x18
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::HMUI::FlowCoordinator*  __4__this;

/// @brief Field finishedCallback offset 0x20
 __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback)) ::System::Action*  finishedCallback;

/// @brief Field viewController offset 0x28
 __declspec(property(get=__get_viewController, put=__set_viewController)) ::HMUI::ViewController*  viewController;

/// @brief Field flowCoordinator offset 0x30
 __declspec(property(get=__get_flowCoordinator, put=__set_flowCoordinator)) ::HMUI::FlowCoordinator*  flowCoordinator;

constexpr void __set_immediately(bool  value) ;

constexpr bool& __get_immediately() ;

constexpr bool const& __get_immediately() const;

constexpr void __set___4__this(::HMUI::FlowCoordinator*  value) ;

constexpr ::HMUI::FlowCoordinator* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> __get___4__this() const;

constexpr void __set_finishedCallback(::System::Action*  value) ;

constexpr ::System::Action* __get_finishedCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_finishedCallback() const;

constexpr void __set_viewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get_viewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get_viewController() const;

constexpr void __set_flowCoordinator(::HMUI::FlowCoordinator*  value) ;

constexpr ::HMUI::FlowCoordinator* __get_flowCoordinator() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> __get_flowCoordinator() const;

static inline ::HMUI::__FlowCoordinator____c__DisplayClass38_0* New_ctor() ;

/// @brief Method .ctor addr 0x2127c38 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <DismissFlowCoordinator>b__0 addr 0x2128eb4 size 0x9c virtual false final false
inline void _DismissFlowCoordinator_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__FlowCoordinator____c__DisplayClass38_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FlowCoordinator____c__DisplayClass38_0(__FlowCoordinator____c__DisplayClass38_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FlowCoordinator____c__DisplayClass38_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FlowCoordinator____c__DisplayClass38_0(__FlowCoordinator____c__DisplayClass38_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FlowCoordinator____c__DisplayClass38_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__FlowCoordinator____c__DisplayClass38_0, 0x38>, "Size mismatch!");

} // namespace end def HMUI
// Type: ::<DismissChildFlowCoordinatorsRecursively>d__39
namespace HMUI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13573))
// CS Name: ::FlowCoordinator::<DismissChildFlowCoordinatorsRecursively>d__39
struct CORDL_TYPE __FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39 : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::HMUI::FlowCoordinator*  __4__this;

/// @brief Field immediately offset 0x28
 __declspec(property(get=__get_immediately, put=__set_immediately)) bool  immediately;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::HMUI::FlowCoordinator*  value) ;

constexpr ::HMUI::FlowCoordinator* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> __get___4__this() const;

constexpr void __set_immediately(bool  value) ;

constexpr bool& __get_immediately() ;

constexpr bool const& __get_immediately() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0x2128f50 size 0x2e0 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2129230 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::HMUI::FlowCoordinator*", modifiers: "", def_value: None }, CppParam { name: "immediately", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::HMUI::FlowCoordinator*  __4__this, bool  immediately, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39, 0x38>, "Size mismatch!");

} // namespace end def HMUI
// Type: ::<DismissChildViewControllersRecursively>d__40
namespace HMUI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13574))
// CS Name: ::FlowCoordinator::<DismissChildViewControllersRecursively>d__40
struct CORDL_TYPE __FlowCoordinator___DismissChildViewControllersRecursively_d__40 : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::HMUI::FlowCoordinator*  __4__this;

/// @brief Field immediately offset 0x28
 __declspec(property(get=__get_immediately, put=__set_immediately)) bool  immediately;

/// @brief Field <>u__1 offset 0x30
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::HMUI::FlowCoordinator*  value) ;

constexpr ::HMUI::FlowCoordinator* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> __get___4__this() const;

constexpr void __set_immediately(bool  value) ;

constexpr bool& __get_immediately() ;

constexpr bool const& __get_immediately() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter const& __get___u__1() const;

/// @brief Method MoveNext addr 0x212923c size 0x1dc virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x2129418 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::HMUI::FlowCoordinator*", modifiers: "", def_value: None }, CppParam { name: "immediately", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr __FlowCoordinator___DismissChildViewControllersRecursively_d__40(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::HMUI::FlowCoordinator*  __4__this, bool  immediately, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __FlowCoordinator___DismissChildViewControllersRecursively_d__40(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __FlowCoordinator___DismissChildViewControllersRecursively_d__40()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40, 0x38>, "Size mismatch!");

} // namespace end def HMUI
// Type: ::<>c__DisplayClass41_0
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13575))
// CS Name: ::FlowCoordinator::<>c__DisplayClass41_0*
class CORDL_TYPE __FlowCoordinator____c__DisplayClass41_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field finishedCallback offset 0x10
 __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback)) ::System::Action*  finishedCallback;

/// @brief Field flowCoordinator offset 0x18
 __declspec(property(get=__get_flowCoordinator, put=__set_flowCoordinator)) ::HMUI::FlowCoordinator*  flowCoordinator;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::HMUI::FlowCoordinator*  __4__this;

/// @brief Field flowCoordinatorToReplace offset 0x28
 __declspec(property(get=__get_flowCoordinatorToReplace, put=__set_flowCoordinatorToReplace)) ::HMUI::FlowCoordinator*  flowCoordinatorToReplace;

constexpr void __set_finishedCallback(::System::Action*  value) ;

constexpr ::System::Action* __get_finishedCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_finishedCallback() const;

constexpr void __set_flowCoordinator(::HMUI::FlowCoordinator*  value) ;

constexpr ::HMUI::FlowCoordinator* __get_flowCoordinator() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> __get_flowCoordinator() const;

constexpr void __set___4__this(::HMUI::FlowCoordinator*  value) ;

constexpr ::HMUI::FlowCoordinator* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> __get___4__this() const;

constexpr void __set_flowCoordinatorToReplace(::HMUI::FlowCoordinator*  value) ;

constexpr ::HMUI::FlowCoordinator* __get_flowCoordinatorToReplace() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> __get_flowCoordinatorToReplace() const;

static inline ::HMUI::__FlowCoordinator____c__DisplayClass41_0* New_ctor() ;

/// @brief Method .ctor addr 0x2128110 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <ReplaceChildFlowCoordinator>b__0 addr 0x2129424 size 0xa0 virtual false final false
inline void _ReplaceChildFlowCoordinator_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__FlowCoordinator____c__DisplayClass41_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FlowCoordinator____c__DisplayClass41_0(__FlowCoordinator____c__DisplayClass41_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FlowCoordinator____c__DisplayClass41_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FlowCoordinator____c__DisplayClass41_0(__FlowCoordinator____c__DisplayClass41_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FlowCoordinator____c__DisplayClass41_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__FlowCoordinator____c__DisplayClass41_0, 0x30>, "Size mismatch!");

} // namespace end def HMUI
// Type: ::<>c__DisplayClass42_0
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13576))
// CS Name: ::FlowCoordinator::<>c__DisplayClass42_0*
class CORDL_TYPE __FlowCoordinator____c__DisplayClass42_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field immediately offset 0x10
 __declspec(property(get=__get_immediately, put=__set_immediately)) bool  immediately;

/// @brief Field <>4__this offset 0x18
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::HMUI::FlowCoordinator*  __4__this;

/// @brief Field finishedCallback offset 0x20
 __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback)) ::System::Action*  finishedCallback;

/// @brief Field topViewController offset 0x28
 __declspec(property(get=__get_topViewController, put=__set_topViewController)) ::HMUI::ViewController*  topViewController;

constexpr void __set_immediately(bool  value) ;

constexpr bool& __get_immediately() ;

constexpr bool const& __get_immediately() const;

constexpr void __set___4__this(::HMUI::FlowCoordinator*  value) ;

constexpr ::HMUI::FlowCoordinator* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> __get___4__this() const;

constexpr void __set_finishedCallback(::System::Action*  value) ;

constexpr ::System::Action* __get_finishedCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_finishedCallback() const;

constexpr void __set_topViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get_topViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get_topViewController() const;

static inline ::HMUI::__FlowCoordinator____c__DisplayClass42_0* New_ctor() ;

/// @brief Method .ctor addr 0x2128118 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <PresentViewController>b__0 addr 0x21294c4 size 0x80 virtual false final false
inline void _PresentViewController_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__FlowCoordinator____c__DisplayClass42_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FlowCoordinator____c__DisplayClass42_0(__FlowCoordinator____c__DisplayClass42_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FlowCoordinator____c__DisplayClass42_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FlowCoordinator____c__DisplayClass42_0(__FlowCoordinator____c__DisplayClass42_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FlowCoordinator____c__DisplayClass42_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__FlowCoordinator____c__DisplayClass42_0, 0x30>, "Size mismatch!");

} // namespace end def HMUI
// Type: ::<>c__DisplayClass43_0
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13577))
// CS Name: ::FlowCoordinator::<>c__DisplayClass43_0*
class CORDL_TYPE __FlowCoordinator____c__DisplayClass43_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field immediately offset 0x10
 __declspec(property(get=__get_immediately, put=__set_immediately)) bool  immediately;

/// @brief Field <>4__this offset 0x18
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::HMUI::FlowCoordinator*  __4__this;

/// @brief Field finishedCallback offset 0x20
 __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback)) ::System::Action*  finishedCallback;

/// @brief Field newTopViewController offset 0x28
 __declspec(property(get=__get_newTopViewController, put=__set_newTopViewController)) ::HMUI::ViewController*  newTopViewController;

/// @brief Field taskCompletionSource offset 0x30
 __declspec(property(get=__get_taskCompletionSource, put=__set_taskCompletionSource)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*  taskCompletionSource;

constexpr void __set_immediately(bool  value) ;

constexpr bool& __get_immediately() ;

constexpr bool const& __get_immediately() const;

constexpr void __set___4__this(::HMUI::FlowCoordinator*  value) ;

constexpr ::HMUI::FlowCoordinator* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> __get___4__this() const;

constexpr void __set_finishedCallback(::System::Action*  value) ;

constexpr ::System::Action* __get_finishedCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_finishedCallback() const;

constexpr void __set_newTopViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get_newTopViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get_newTopViewController() const;

constexpr void __set_taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* __get_taskCompletionSource() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*> __get_taskCompletionSource() const;

static inline ::HMUI::__FlowCoordinator____c__DisplayClass43_0* New_ctor() ;

/// @brief Method .ctor addr 0x2128358 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <DismissViewController>b__0 addr 0x2129544 size 0xbc virtual false final false
inline void _DismissViewController_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__FlowCoordinator____c__DisplayClass43_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FlowCoordinator____c__DisplayClass43_0(__FlowCoordinator____c__DisplayClass43_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FlowCoordinator____c__DisplayClass43_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FlowCoordinator____c__DisplayClass43_0(__FlowCoordinator____c__DisplayClass43_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FlowCoordinator____c__DisplayClass43_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__FlowCoordinator____c__DisplayClass43_0, 0x38>, "Size mismatch!");

} // namespace end def HMUI
// Type: ::<>c__DisplayClass45_0
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13578))
// CS Name: ::FlowCoordinator::<>c__DisplayClass45_0*
class CORDL_TYPE __FlowCoordinator____c__DisplayClass45_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field animationType offset 0x10
 __declspec(property(get=__get_animationType, put=__set_animationType)) ::HMUI::__ViewController__AnimationType  animationType;

/// @brief Field <>4__this offset 0x18
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::HMUI::FlowCoordinator*  __4__this;

/// @brief Field finishedCallback offset 0x20
 __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback)) ::System::Action*  finishedCallback;

/// @brief Field originalTopViewController offset 0x28
 __declspec(property(get=__get_originalTopViewController, put=__set_originalTopViewController)) ::HMUI::ViewController*  originalTopViewController;

constexpr void __set_animationType(::HMUI::__ViewController__AnimationType  value) ;

constexpr ::HMUI::__ViewController__AnimationType& __get_animationType() ;

constexpr ::HMUI::__ViewController__AnimationType const& __get_animationType() const;

constexpr void __set___4__this(::HMUI::FlowCoordinator*  value) ;

constexpr ::HMUI::FlowCoordinator* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> __get___4__this() const;

constexpr void __set_finishedCallback(::System::Action*  value) ;

constexpr ::System::Action* __get_finishedCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_finishedCallback() const;

constexpr void __set_originalTopViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get_originalTopViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get_originalTopViewController() const;

static inline ::HMUI::__FlowCoordinator____c__DisplayClass45_0* New_ctor() ;

/// @brief Method .ctor addr 0x212843c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <ReplaceTopViewController>b__0 addr 0x2129600 size 0x80 virtual false final false
inline void _ReplaceTopViewController_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__FlowCoordinator____c__DisplayClass45_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FlowCoordinator____c__DisplayClass45_0(__FlowCoordinator____c__DisplayClass45_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FlowCoordinator____c__DisplayClass45_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FlowCoordinator____c__DisplayClass45_0(__FlowCoordinator____c__DisplayClass45_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FlowCoordinator____c__DisplayClass45_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__FlowCoordinator____c__DisplayClass45_0, 0x30>, "Size mismatch!");

} // namespace end def HMUI
// Type: ::<>c__DisplayClass46_0
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13579))
// CS Name: ::FlowCoordinator::<>c__DisplayClass46_0*
class CORDL_TYPE __FlowCoordinator____c__DisplayClass46_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field immediately offset 0x10
 __declspec(property(get=__get_immediately, put=__set_immediately)) bool  immediately;

/// @brief Field <>4__this offset 0x18
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::HMUI::FlowCoordinator*  __4__this;

/// @brief Field finishedCallback offset 0x20
 __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback)) ::System::Action*  finishedCallback;

/// @brief Field viewController offset 0x28
 __declspec(property(get=__get_viewController, put=__set_viewController)) ::HMUI::ViewController*  viewController;

constexpr void __set_immediately(bool  value) ;

constexpr bool& __get_immediately() ;

constexpr bool const& __get_immediately() const;

constexpr void __set___4__this(::HMUI::FlowCoordinator*  value) ;

constexpr ::HMUI::FlowCoordinator* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> __get___4__this() const;

constexpr void __set_finishedCallback(::System::Action*  value) ;

constexpr ::System::Action* __get_finishedCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_finishedCallback() const;

constexpr void __set_viewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get_viewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get_viewController() const;

static inline ::HMUI::__FlowCoordinator____c__DisplayClass46_0* New_ctor() ;

/// @brief Method .ctor addr 0x2128574 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <PushViewControllerToNavigationController>b__0 addr 0x2129680 size 0x80 virtual false final false
inline void _PushViewControllerToNavigationController_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__FlowCoordinator____c__DisplayClass46_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FlowCoordinator____c__DisplayClass46_0(__FlowCoordinator____c__DisplayClass46_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FlowCoordinator____c__DisplayClass46_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FlowCoordinator____c__DisplayClass46_0(__FlowCoordinator____c__DisplayClass46_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FlowCoordinator____c__DisplayClass46_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__FlowCoordinator____c__DisplayClass46_0, 0x30>, "Size mismatch!");

} // namespace end def HMUI
// Type: ::<>c__DisplayClass49_0
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13580))
// CS Name: ::FlowCoordinator::<>c__DisplayClass49_0*
class CORDL_TYPE __FlowCoordinator____c__DisplayClass49_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field immediately offset 0x10
 __declspec(property(get=__get_immediately, put=__set_immediately)) bool  immediately;

/// @brief Field <>4__this offset 0x18
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::HMUI::FlowCoordinator*  __4__this;

/// @brief Field finishedCallback offset 0x20
 __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback)) ::System::Action*  finishedCallback;

/// @brief Field navigationController offset 0x28
 __declspec(property(get=__get_navigationController, put=__set_navigationController)) ::HMUI::NavigationController*  navigationController;

constexpr void __set_immediately(bool  value) ;

constexpr bool& __get_immediately() ;

constexpr bool const& __get_immediately() const;

constexpr void __set___4__this(::HMUI::FlowCoordinator*  value) ;

constexpr ::HMUI::FlowCoordinator* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> __get___4__this() const;

constexpr void __set_finishedCallback(::System::Action*  value) ;

constexpr ::System::Action* __get_finishedCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_finishedCallback() const;

constexpr void __set_navigationController(::HMUI::NavigationController*  value) ;

constexpr ::HMUI::NavigationController* __get_navigationController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::NavigationController*> __get_navigationController() const;

static inline ::HMUI::__FlowCoordinator____c__DisplayClass49_0* New_ctor() ;

/// @brief Method .ctor addr 0x21286d4 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <PopViewControllerFromNavigationController>b__0 addr 0x2129700 size 0x80 virtual false final false
inline void _PopViewControllerFromNavigationController_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__FlowCoordinator____c__DisplayClass49_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FlowCoordinator____c__DisplayClass49_0(__FlowCoordinator____c__DisplayClass49_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FlowCoordinator____c__DisplayClass49_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FlowCoordinator____c__DisplayClass49_0(__FlowCoordinator____c__DisplayClass49_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FlowCoordinator____c__DisplayClass49_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__FlowCoordinator____c__DisplayClass49_0, 0x30>, "Size mismatch!");

} // namespace end def HMUI
// Type: ::<>c__DisplayClass50_0
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13581))
// CS Name: ::FlowCoordinator::<>c__DisplayClass50_0*
class CORDL_TYPE __FlowCoordinator____c__DisplayClass50_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field immediately offset 0x10
 __declspec(property(get=__get_immediately, put=__set_immediately)) bool  immediately;

/// @brief Field <>4__this offset 0x18
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::HMUI::FlowCoordinator*  __4__this;

/// @brief Field finishedCallback offset 0x20
 __declspec(property(get=__get_finishedCallback, put=__set_finishedCallback)) ::System::Action*  finishedCallback;

/// @brief Field navigationController offset 0x28
 __declspec(property(get=__get_navigationController, put=__set_navigationController)) ::HMUI::NavigationController*  navigationController;

constexpr void __set_immediately(bool  value) ;

constexpr bool& __get_immediately() ;

constexpr bool const& __get_immediately() const;

constexpr void __set___4__this(::HMUI::FlowCoordinator*  value) ;

constexpr ::HMUI::FlowCoordinator* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> __get___4__this() const;

constexpr void __set_finishedCallback(::System::Action*  value) ;

constexpr ::System::Action* __get_finishedCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_finishedCallback() const;

constexpr void __set_navigationController(::HMUI::NavigationController*  value) ;

constexpr ::HMUI::NavigationController* __get_navigationController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::NavigationController*> __get_navigationController() const;

static inline ::HMUI::__FlowCoordinator____c__DisplayClass50_0* New_ctor() ;

/// @brief Method .ctor addr 0x212880c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <PopViewControllersFromNavigationController>b__0 addr 0x2129780 size 0x1080 virtual false final false
inline void _PopViewControllersFromNavigationController_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__FlowCoordinator____c__DisplayClass50_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FlowCoordinator____c__DisplayClass50_0(__FlowCoordinator____c__DisplayClass50_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FlowCoordinator____c__DisplayClass50_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FlowCoordinator____c__DisplayClass50_0(__FlowCoordinator____c__DisplayClass50_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FlowCoordinator____c__DisplayClass50_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__FlowCoordinator____c__DisplayClass50_0, 0x30>, "Size mismatch!");

} // namespace end def HMUI
// Type: HMUI::FlowCoordinator
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13582))
// CS Name: ::HMUI::FlowCoordinator*
class CORDL_TYPE FlowCoordinator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass50_0 = ::HMUI::__FlowCoordinator____c__DisplayClass50_0;

using __c__DisplayClass49_0 = ::HMUI::__FlowCoordinator____c__DisplayClass49_0;

using __c__DisplayClass46_0 = ::HMUI::__FlowCoordinator____c__DisplayClass46_0;

using __c__DisplayClass45_0 = ::HMUI::__FlowCoordinator____c__DisplayClass45_0;

using __c__DisplayClass43_0 = ::HMUI::__FlowCoordinator____c__DisplayClass43_0;

using __c__DisplayClass42_0 = ::HMUI::__FlowCoordinator____c__DisplayClass42_0;

using __c__DisplayClass41_0 = ::HMUI::__FlowCoordinator____c__DisplayClass41_0;

using _DismissChildViewControllersRecursively_d__40 = ::HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40;

using _DismissChildFlowCoordinatorsRecursively_d__39 = ::HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39;

using __c__DisplayClass38_0 = ::HMUI::__FlowCoordinator____c__DisplayClass38_0;

using __c__DisplayClass37_0 = ::HMUI::__FlowCoordinator____c__DisplayClass37_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa8 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _baseInputModule offset 0x18
 __declspec(property(get=__get__baseInputModule, put=__set__baseInputModule)) ::UnityEngine::EventSystems::BaseInputModule*  _baseInputModule;

/// @brief Field _screenSystem offset 0x20
 __declspec(property(get=__get__screenSystem, put=__set__screenSystem)) ::HMUI::ScreenSystem*  _screenSystem;

/// @brief Field _parentFlowCoordinator offset 0x28
 __declspec(property(get=__get__parentFlowCoordinator, put=__set__parentFlowCoordinator)) ::HMUI::FlowCoordinator*  _parentFlowCoordinator;

/// @brief Field _childFlowCoordinator offset 0x30
 __declspec(property(get=__get__childFlowCoordinator, put=__set__childFlowCoordinator)) ::HMUI::FlowCoordinator*  _childFlowCoordinator;

/// @brief Field _mainScreenViewControllers offset 0x38
 __declspec(property(get=__get__mainScreenViewControllers, put=__set__mainScreenViewControllers)) ::System::Collections::Generic::List_1<::HMUI::ViewController*>*  _mainScreenViewControllers;

/// @brief Field _leftScreenViewController offset 0x40
 __declspec(property(get=__get__leftScreenViewController, put=__set__leftScreenViewController)) ::HMUI::ViewController*  _leftScreenViewController;

/// @brief Field _rightScreenViewController offset 0x48
 __declspec(property(get=__get__rightScreenViewController, put=__set__rightScreenViewController)) ::HMUI::ViewController*  _rightScreenViewController;

/// @brief Field _bottomScreenViewController offset 0x50
 __declspec(property(get=__get__bottomScreenViewController, put=__set__bottomScreenViewController)) ::HMUI::ViewController*  _bottomScreenViewController;

/// @brief Field _topScreenViewController offset 0x58
 __declspec(property(get=__get__topScreenViewController, put=__set__topScreenViewController)) ::HMUI::ViewController*  _topScreenViewController;

/// @brief Field _wasActivatedBefore offset 0x60
 __declspec(property(get=__get__wasActivatedBefore, put=__set__wasActivatedBefore)) bool  _wasActivatedBefore;

/// @brief Field _title offset 0x68
 __declspec(property(get=__get__title, put=__set__title)) ::StringW  _title;

/// @brief Field _providedMainViewController offset 0x70
 __declspec(property(get=__get__providedMainViewController, put=__set__providedMainViewController)) ::HMUI::ViewController*  _providedMainViewController;

/// @brief Field _providedLeftScreenViewController offset 0x78
 __declspec(property(get=__get__providedLeftScreenViewController, put=__set__providedLeftScreenViewController)) ::HMUI::ViewController*  _providedLeftScreenViewController;

/// @brief Field _providedRightScreenViewController offset 0x80
 __declspec(property(get=__get__providedRightScreenViewController, put=__set__providedRightScreenViewController)) ::HMUI::ViewController*  _providedRightScreenViewController;

/// @brief Field _providedBottomScreenViewController offset 0x88
 __declspec(property(get=__get__providedBottomScreenViewController, put=__set__providedBottomScreenViewController)) ::HMUI::ViewController*  _providedBottomScreenViewController;

/// @brief Field _providedTopScreenViewController offset 0x90
 __declspec(property(get=__get__providedTopScreenViewController, put=__set__providedTopScreenViewController)) ::HMUI::ViewController*  _providedTopScreenViewController;

/// @brief Field _viewControllersWereProvided offset 0x98
 __declspec(property(get=__get__viewControllersWereProvided, put=__set__viewControllersWereProvided)) bool  _viewControllersWereProvided;

/// @brief Field _isInDidActivatePhase offset 0x99
 __declspec(property(get=__get__isInDidActivatePhase, put=__set__isInDidActivatePhase)) bool  _isInDidActivatePhase;

/// @brief Field _isActivated offset 0x9a
 __declspec(property(get=__get__isActivated, put=__set__isActivated)) bool  _isActivated;

/// @brief Field _isInTransition offset 0x9b
 __declspec(property(get=__get__isInTransition, put=__set__isInTransition)) bool  _isInTransition;

/// @brief Field _showBackButton offset 0x9c
 __declspec(property(get=__get__showBackButton, put=__set__showBackButton)) bool  _showBackButton;

/// @brief Field _prevEventSystem offset 0xa0
 __declspec(property(get=__get__prevEventSystem, put=__set__prevEventSystem)) ::UnityEngine::EventSystems::EventSystem*  _prevEventSystem;

 __declspec(property(get=get_topViewController)) ::HMUI::ViewController*  topViewController;

 __declspec(property(get=get_childFlowCoordinator)) ::HMUI::FlowCoordinator*  childFlowCoordinator;

 __declspec(property(get=get_isActivated)) bool  isActivated;

 __declspec(property(get=get_isInTransition)) bool  isInTransition;

 __declspec(property(get=get_title)) ::StringW  title;

 __declspec(property(get=get_showBackButton, put=set_showBackButton)) bool  showBackButton;

constexpr void __set__baseInputModule(::UnityEngine::EventSystems::BaseInputModule*  value) ;

constexpr ::UnityEngine::EventSystems::BaseInputModule* __get__baseInputModule() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::BaseInputModule*> __get__baseInputModule() const;

constexpr void __set__screenSystem(::HMUI::ScreenSystem*  value) ;

constexpr ::HMUI::ScreenSystem* __get__screenSystem() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ScreenSystem*> __get__screenSystem() const;

constexpr void __set__parentFlowCoordinator(::HMUI::FlowCoordinator*  value) ;

constexpr ::HMUI::FlowCoordinator* __get__parentFlowCoordinator() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> __get__parentFlowCoordinator() const;

constexpr void __set__childFlowCoordinator(::HMUI::FlowCoordinator*  value) ;

constexpr ::HMUI::FlowCoordinator* __get__childFlowCoordinator() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> __get__childFlowCoordinator() const;

constexpr void __set__mainScreenViewControllers(::System::Collections::Generic::List_1<::HMUI::ViewController*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::HMUI::ViewController*>* __get__mainScreenViewControllers() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HMUI::ViewController*>*> __get__mainScreenViewControllers() const;

constexpr void __set__leftScreenViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get__leftScreenViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get__leftScreenViewController() const;

constexpr void __set__rightScreenViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get__rightScreenViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get__rightScreenViewController() const;

constexpr void __set__bottomScreenViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get__bottomScreenViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get__bottomScreenViewController() const;

constexpr void __set__topScreenViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get__topScreenViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get__topScreenViewController() const;

constexpr void __set__wasActivatedBefore(bool  value) ;

constexpr bool& __get__wasActivatedBefore() ;

constexpr bool const& __get__wasActivatedBefore() const;

constexpr void __set__title(::StringW  value) ;

constexpr ::StringW& __get__title() ;

constexpr ::StringW const& __get__title() const;

constexpr void __set__providedMainViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get__providedMainViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get__providedMainViewController() const;

constexpr void __set__providedLeftScreenViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get__providedLeftScreenViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get__providedLeftScreenViewController() const;

constexpr void __set__providedRightScreenViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get__providedRightScreenViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get__providedRightScreenViewController() const;

constexpr void __set__providedBottomScreenViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get__providedBottomScreenViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get__providedBottomScreenViewController() const;

constexpr void __set__providedTopScreenViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get__providedTopScreenViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get__providedTopScreenViewController() const;

constexpr void __set__viewControllersWereProvided(bool  value) ;

constexpr bool& __get__viewControllersWereProvided() ;

constexpr bool const& __get__viewControllersWereProvided() const;

constexpr void __set__isInDidActivatePhase(bool  value) ;

constexpr bool& __get__isInDidActivatePhase() ;

constexpr bool const& __get__isInDidActivatePhase() const;

constexpr void __set__isActivated(bool  value) ;

constexpr bool& __get__isActivated() ;

constexpr bool const& __get__isActivated() const;

constexpr void __set__isInTransition(bool  value) ;

constexpr bool& __get__isInTransition() ;

constexpr bool const& __get__isInTransition() const;

constexpr void __set__showBackButton(bool  value) ;

constexpr bool& __get__showBackButton() ;

constexpr bool const& __get__showBackButton() const;

constexpr void __set__prevEventSystem(::UnityEngine::EventSystems::EventSystem*  value) ;

constexpr ::UnityEngine::EventSystems::EventSystem* __get__prevEventSystem() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::EventSystem*> __get__prevEventSystem() const;

/// @brief Method get_topViewController addr 0x2126764 size 0x78 virtual false final false
inline ::HMUI::ViewController* get_topViewController() ;

/// @brief Method get_childFlowCoordinator addr 0x21267dc size 0x8 virtual false final false
inline ::HMUI::FlowCoordinator* get_childFlowCoordinator() ;

/// @brief Method get_isActivated addr 0x21267e4 size 0x8 virtual false final false
inline bool get_isActivated() ;

/// @brief Method get_isInTransition addr 0x21267ec size 0x8 virtual false final false
inline bool get_isInTransition() ;

/// @brief Method get_title addr 0x21267f4 size 0x8 virtual false final false
inline ::StringW get_title() ;

/// @brief Method SetTitle addr 0x21267fc size 0x50 virtual false final false
inline void SetTitle(::StringW  value, ::HMUI::__ViewController__AnimationType  animationType) ;

/// @brief Method set_showBackButton addr 0x212695c size 0xc virtual false final false
inline void set_showBackButton(bool  value) ;

/// @brief Method get_showBackButton addr 0x2126968 size 0x8 virtual false final false
inline bool get_showBackButton() ;

/// @brief Method __StartOnScreenSystem addr 0x2126970 size 0x150 virtual false final false
inline void __StartOnScreenSystem(::HMUI::ScreenSystem*  screenSystem) ;

/// @brief Method PresentFlowCoordinator addr 0x2127298 size 0x3b8 virtual false final false
inline void PresentFlowCoordinator(::HMUI::FlowCoordinator*  flowCoordinator, ::System::Action*  finishedCallback, ::HMUI::__ViewController__AnimationDirection  animationDirection, bool  immediately, bool  replaceTopViewController) ;

/// @brief Method DismissFlowCoordinator addr 0x212792c size 0x30c virtual false final false
inline void DismissFlowCoordinator(::HMUI::FlowCoordinator*  flowCoordinator, ::HMUI::__ViewController__AnimationDirection  animationDirection, ::System::Action*  finishedCallback, bool  immediately) ;

/// @brief Method DismissChildFlowCoordinatorsRecursively addr 0x2127c60 size 0xdc virtual false final false
inline ::System::Threading::Tasks::Task* DismissChildFlowCoordinatorsRecursively(bool  immediately) ;

/// @brief Method DismissChildViewControllersRecursively addr 0x2127d3c size 0xdc virtual false final false
inline ::System::Threading::Tasks::Task* DismissChildViewControllersRecursively(bool  immediately) ;

/// @brief Method ReplaceChildFlowCoordinator addr 0x2127e18 size 0x2f8 virtual false final false
inline void ReplaceChildFlowCoordinator(::HMUI::FlowCoordinator*  flowCoordinator, ::System::Action*  finishedCallback, ::HMUI::__ViewController__AnimationDirection  animationDirection, bool  immediately) ;

/// @brief Method PresentViewController addr 0x2126eec size 0x3ac virtual false final false
inline void PresentViewController(::HMUI::ViewController*  viewController, ::System::Action*  finishedCallback, ::HMUI::__ViewController__AnimationDirection  animationDirection, bool  immediately) ;

/// @brief Method DismissViewController addr 0x2128120 size 0x238 virtual false final false
inline ::System::Threading::Tasks::Task* DismissViewController(::HMUI::ViewController*  viewController, ::HMUI::__ViewController__AnimationDirection  animationDirection, ::System::Action*  finishedCallback, bool  immediately) ;

/// @brief Method ReplaceTopViewController addr 0x2128360 size 0xdc virtual false final false
inline void ReplaceTopViewController(::HMUI::ViewController*  viewController, ::System::Action*  finishedCallback, ::HMUI::__ViewController__AnimationType  animationType, ::HMUI::__ViewController__AnimationDirection  animationDirection) ;

/// @brief Method ReplaceTopViewController addr 0x2127710 size 0x21c virtual false final false
inline void ReplaceTopViewController(::HMUI::ViewController*  viewController, ::HMUI::FlowCoordinator*  originalOwnerFlowCoordinator, ::HMUI::FlowCoordinator*  newOwnerFlowCoordinator, ::System::Action*  finishedCallback, ::HMUI::__ViewController__AnimationType  animationType, ::HMUI::__ViewController__AnimationDirection  animationDirection) ;

/// @brief Method PushViewControllerToNavigationController addr 0x2128444 size 0x130 virtual false final false
inline void PushViewControllerToNavigationController(::HMUI::NavigationController*  navigationController, ::HMUI::ViewController*  viewController, ::System::Action*  finishedCallback, bool  immediately) ;

/// @brief Method SetViewControllersToNavigationController addr 0x212857c size 0x18 virtual false final false
inline void SetViewControllersToNavigationController(::HMUI::NavigationController*  navigationController, ::ArrayW<::HMUI::ViewController*,::Array<::HMUI::ViewController*>*>  viewControllers) ;

/// @brief Method SetViewControllerToNavigationController addr 0x2128594 size 0x18 virtual false final false
inline void SetViewControllerToNavigationController(::HMUI::NavigationController*  navigationController, ::HMUI::ViewController*  viewController) ;

/// @brief Method PopViewControllerFromNavigationController addr 0x21285ac size 0x128 virtual false final false
inline void PopViewControllerFromNavigationController(::HMUI::NavigationController*  navigationController, ::System::Action*  finishedCallback, bool  immediately) ;

/// @brief Method PopViewControllersFromNavigationController addr 0x21286dc size 0x130 virtual false final false
inline void PopViewControllersFromNavigationController(::HMUI::NavigationController*  navigationController, int32_t  numberOfControllers, ::System::Action*  finishedCallback, bool  immediately) ;

/// @brief Method SetLeftScreenViewController addr 0x2126b8c size 0xd8 virtual false final false
inline void SetLeftScreenViewController(::HMUI::ViewController*  viewController, ::HMUI::__ViewController__AnimationType  animationType) ;

/// @brief Method SetRightScreenViewController addr 0x2126c64 size 0xd8 virtual false final false
inline void SetRightScreenViewController(::HMUI::ViewController*  viewController, ::HMUI::__ViewController__AnimationType  animationType) ;

/// @brief Method SetBottomScreenViewController addr 0x2126d3c size 0xd8 virtual false final false
inline void SetBottomScreenViewController(::HMUI::ViewController*  viewController, ::HMUI::__ViewController__AnimationType  animationType) ;

/// @brief Method SetTopScreenViewController addr 0x2126e14 size 0xd8 virtual false final false
inline void SetTopScreenViewController(::HMUI::ViewController*  viewController, ::HMUI::__ViewController__AnimationType  animationType) ;

/// @brief Method PresentTitle addr 0x21268ec size 0x70 virtual false final false
inline void PresentTitle(::StringW  title, ::HMUI::__ViewController__AnimationType  animationType) ;

/// @brief Method IsFlowCoordinatorInHierarchy addr 0x212684c size 0xa0 virtual false final false
inline bool IsFlowCoordinatorInHierarchy(::HMUI::FlowCoordinator*  flowCoordinator) ;

/// @brief Method YoungestChildFlowCoordinatorOrSelf addr 0x2128814 size 0x7c virtual false final false
inline ::HMUI::FlowCoordinator* YoungestChildFlowCoordinatorOrSelf() ;

/// @brief Method ProvideInitialViewControllers addr 0x2128890 size 0x18 virtual false final false
inline void ProvideInitialViewControllers(::HMUI::ViewController*  mainViewController, ::HMUI::ViewController*  leftScreenViewController, ::HMUI::ViewController*  rightScreenViewController, ::HMUI::ViewController*  bottomScreenViewController, ::HMUI::ViewController*  topScreenViewController) ;

/// @brief Method Activate addr 0x2126ac0 size 0xcc virtual false final false
inline void Activate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method Deactivate addr 0x2127658 size 0xb8 virtual false final false
inline void Deactivate(bool  removedFromHierarchy, bool  screenSystemDisabling) ;

/// @brief Method __ExternalActivate addr 0x21288a8 size 0x1f8 virtual false final false
inline void __ExternalActivate() ;

/// @brief Method __ExternalDeactivate addr 0x2128aa0 size 0x208 virtual false final false
inline void __ExternalDeactivate() ;

/// @brief Method HandleScreenSystemBackButtonWasPressed addr 0x2128ca8 size 0x24 virtual false final false
inline void HandleScreenSystemBackButtonWasPressed() ;

/// @brief Method SetGlobalUserInteraction addr 0x2127c40 size 0x20 virtual false final false
inline void SetGlobalUserInteraction(bool  value) ;

/// @brief Method DidActivate addr 0x0 size 0xffffffffffffffff virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x2128ccc size 0x4 virtual true final false
inline void DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling) ;

/// @brief Method TransitionDidStart addr 0x2128cd0 size 0xc virtual true final false
inline void TransitionDidStart() ;

/// @brief Method TransitionDidFinish addr 0x2128cdc size 0x8 virtual true final false
inline void TransitionDidFinish() ;

/// @brief Method TopViewControllerWillChange addr 0x2128ce4 size 0x4 virtual true final false
inline void TopViewControllerWillChange(::HMUI::ViewController*  oldViewController, ::HMUI::ViewController*  newViewController, ::HMUI::__ViewController__AnimationType  animationType) ;

/// @brief Method InitialViewControllerWasPresented addr 0x2128ce8 size 0x4 virtual true final false
inline void InitialViewControllerWasPresented() ;

/// @brief Method BackButtonWasPressed addr 0x2128cec size 0x4 virtual true final false
inline void BackButtonWasPressed(::HMUI::ViewController*  topViewController) ;

/// @brief Method Log addr 0x2128cf0 size 0x58 virtual false final false
static inline void Log(::StringW  message) ;

static inline ::HMUI::FlowCoordinator* New_ctor() ;

/// @brief Method .ctor addr 0x2128d48 size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FlowCoordinator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FlowCoordinator(FlowCoordinator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlowCoordinator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlowCoordinator(FlowCoordinator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FlowCoordinator()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::FlowCoordinator, 0xa8>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::FlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::FlowCoordinator*, "HMUI", "FlowCoordinator");
NEED_NO_BOX(::HMUI::__FlowCoordinator____c__DisplayClass37_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__FlowCoordinator____c__DisplayClass37_0*, "HMUI", "FlowCoordinator/<>c__DisplayClass37_0");
NEED_NO_BOX(::HMUI::__FlowCoordinator____c__DisplayClass38_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__FlowCoordinator____c__DisplayClass38_0*, "HMUI", "FlowCoordinator/<>c__DisplayClass38_0");
NEED_NO_BOX(::HMUI::__FlowCoordinator____c__DisplayClass41_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__FlowCoordinator____c__DisplayClass41_0*, "HMUI", "FlowCoordinator/<>c__DisplayClass41_0");
NEED_NO_BOX(::HMUI::__FlowCoordinator____c__DisplayClass42_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__FlowCoordinator____c__DisplayClass42_0*, "HMUI", "FlowCoordinator/<>c__DisplayClass42_0");
NEED_NO_BOX(::HMUI::__FlowCoordinator____c__DisplayClass43_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__FlowCoordinator____c__DisplayClass43_0*, "HMUI", "FlowCoordinator/<>c__DisplayClass43_0");
NEED_NO_BOX(::HMUI::__FlowCoordinator____c__DisplayClass45_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__FlowCoordinator____c__DisplayClass45_0*, "HMUI", "FlowCoordinator/<>c__DisplayClass45_0");
NEED_NO_BOX(::HMUI::__FlowCoordinator____c__DisplayClass46_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__FlowCoordinator____c__DisplayClass46_0*, "HMUI", "FlowCoordinator/<>c__DisplayClass46_0");
NEED_NO_BOX(::HMUI::__FlowCoordinator____c__DisplayClass49_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__FlowCoordinator____c__DisplayClass49_0*, "HMUI", "FlowCoordinator/<>c__DisplayClass49_0");
NEED_NO_BOX(::HMUI::__FlowCoordinator____c__DisplayClass50_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__FlowCoordinator____c__DisplayClass50_0*, "HMUI", "FlowCoordinator/<>c__DisplayClass50_0");
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__39, "HMUI", "FlowCoordinator/<DismissChildFlowCoordinatorsRecursively>d__39");
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__40, "HMUI", "FlowCoordinator/<DismissChildViewControllersRecursively>d__40");
