#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MockBeatmapLoader)
namespace GlobalNamespace {
class IMockBeatmapDataProvider;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class BeatmapIdentifierNetSerializable;
}
namespace GlobalNamespace {
class __MockBeatmapLoader____c__DisplayClass2_0;
}
namespace GlobalNamespace {
class MockBeatmapData;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class __MockBeatmapLoader____c;
}
namespace GlobalNamespace {
struct __MockBeatmapLoader___GetBeatmapData_d__2;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
struct __MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace GlobalNamespace {
struct __BeatmapLevelsModel__GetBeatmapLevelResult;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class MockBeatmapLoader;
}
namespace GlobalNamespace {
class __MockBeatmapLoader____c;
}
namespace GlobalNamespace {
class __MockBeatmapLoader____c__DisplayClass2_0;
}
namespace GlobalNamespace {
struct __MockBeatmapLoader___GetBeatmapData_d__2;
}
namespace GlobalNamespace {
struct __MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockBeatmapLoader);
MARK_REF_PTR_T(::GlobalNamespace::__MockBeatmapLoader____c);
MARK_REF_PTR_T(::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0);
MARK_VAL_T(::GlobalNamespace::__MockBeatmapLoader___GetBeatmapData_d__2);
MARK_VAL_T(::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d);
// Type: ::<<GetBeatmapData>b__3>d
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5172))
// CS Name: ::MockBeatmapLoader::<>c__DisplayClass2_0::<<GetBeatmapData>b__3>d
struct CORDL_TYPE __MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0*  __4__this;

/// @brief Field <>u__1 offset 0x28
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0*  value) ;

constexpr ::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0*> __get___4__this() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x23dee64 size 0x264 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x23df0c8 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>", modifiers: "", def_value: None }]
constexpr __MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IReadonlyBeatmapData*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass2_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5173))
// CS Name: ::MockBeatmapLoader::<>c__DisplayClass2_0*
class CORDL_TYPE __MockBeatmapLoader____c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
using __GetBeatmapData_b__3_d = ::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field beatmap offset 0x10
 __declspec(property(get=__get_beatmap, put=__set_beatmap)) ::GlobalNamespace::BeatmapIdentifierNetSerializable*  beatmap;

/// @brief Field difficultyBeatmap offset 0x18
 __declspec(property(get=__get_difficultyBeatmap, put=__set_difficultyBeatmap)) ::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap;

/// @brief Field beatmapData offset 0x20
 __declspec(property(get=__get_beatmapData, put=__set_beatmapData)) ::GlobalNamespace::IReadonlyBeatmapData*  beatmapData;

constexpr void __set_beatmap(::GlobalNamespace::BeatmapIdentifierNetSerializable*  value) ;

constexpr ::GlobalNamespace::BeatmapIdentifierNetSerializable* __get_beatmap() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapIdentifierNetSerializable*> __get_beatmap() const;

constexpr void __set_difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap*  value) ;

constexpr ::GlobalNamespace::IDifficultyBeatmap* __get_difficultyBeatmap() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> __get_difficultyBeatmap() const;

constexpr void __set_beatmapData(::GlobalNamespace::IReadonlyBeatmapData*  value) ;

constexpr ::GlobalNamespace::IReadonlyBeatmapData* __get_beatmapData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> __get_beatmapData() const;

static inline ::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0* New_ctor() ;

/// @brief Method .ctor addr 0x23dec1c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GetBeatmapData>b__0 addr 0x23dec24 size 0xbc virtual false final false
inline bool _GetBeatmapData_b__0(::GlobalNamespace::IDifficultyBeatmapSet*  bds) ;

/// @brief Method <GetBeatmapData>b__2 addr 0x23dece0 size 0xbc virtual false final false
inline bool _GetBeatmapData_b__2(::GlobalNamespace::IDifficultyBeatmap*  dbm) ;

/// @brief Method <GetBeatmapData>b__3 addr 0x23ded9c size 0xc8 virtual false final false
inline ::System::Threading::Tasks::Task* _GetBeatmapData_b__3() ;

// Ctor Parameters [CppParam { name: "", ty: "__MockBeatmapLoader____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MockBeatmapLoader____c__DisplayClass2_0(__MockBeatmapLoader____c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MockBeatmapLoader____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MockBeatmapLoader____c__DisplayClass2_0(__MockBeatmapLoader____c__DisplayClass2_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MockBeatmapLoader____c__DisplayClass2_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5174))
// CS Name: ::MockBeatmapLoader::<>c*
class CORDL_TYPE __MockBeatmapLoader____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__MockBeatmapLoader____c*  value) ;

static inline ::GlobalNamespace::__MockBeatmapLoader____c* getStaticF___9() ;

static inline void setStaticF___9__2_1(::System::Func_2<::GlobalNamespace::IDifficultyBeatmapSet*,::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IDifficultyBeatmap*>*>*  value) ;

static inline ::System::Func_2<::GlobalNamespace::IDifficultyBeatmapSet*,::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IDifficultyBeatmap*>*>* getStaticF___9__2_1() ;

static inline ::GlobalNamespace::__MockBeatmapLoader____c* New_ctor() ;

/// @brief Method .ctor addr 0x23df138 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GetBeatmapData>b__2_1 addr 0x23df140 size 0xa0 virtual false final false
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::IDifficultyBeatmap*>* _GetBeatmapData_b__2_1(::GlobalNamespace::IDifficultyBeatmapSet*  bds) ;

// Ctor Parameters [CppParam { name: "", ty: "__MockBeatmapLoader____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MockBeatmapLoader____c(__MockBeatmapLoader____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MockBeatmapLoader____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MockBeatmapLoader____c(__MockBeatmapLoader____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MockBeatmapLoader____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__2_1


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MockBeatmapLoader____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<GetBeatmapData>d__2
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5175))
// CS Name: ::MockBeatmapLoader::<GetBeatmapData>d__2
struct CORDL_TYPE __MockBeatmapLoader___GetBeatmapData_d__2 : public ::bs_hook::ValueTypeWrapper<0x48> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MockBeatmapData*>  __t__builder;

/// @brief Field beatmap offset 0x20
 __declspec(property(get=__get_beatmap, put=__set_beatmap)) ::GlobalNamespace::BeatmapIdentifierNetSerializable*  beatmap;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::MockBeatmapLoader*  __4__this;

/// @brief Field cancellationToken offset 0x30
 __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>8__1 offset 0x38
 __declspec(property(get=__get___8__1, put=__set___8__1)) ::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0*  __8__1;

/// @brief Field <>u__1 offset 0x40
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MockBeatmapData*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MockBeatmapData*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MockBeatmapData*> const& __get___t__builder() const;

constexpr void __set_beatmap(::GlobalNamespace::BeatmapIdentifierNetSerializable*  value) ;

constexpr ::GlobalNamespace::BeatmapIdentifierNetSerializable* __get_beatmap() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapIdentifierNetSerializable*> __get_beatmap() const;

constexpr void __set___4__this(::GlobalNamespace::MockBeatmapLoader*  value) ;

constexpr ::GlobalNamespace::MockBeatmapLoader* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MockBeatmapLoader*> __get___4__this() const;

constexpr void __set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr ::System::Threading::CancellationToken& __get_cancellationToken() ;

constexpr ::System::Threading::CancellationToken const& __get_cancellationToken() const;

constexpr void __set___8__1(::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0*  value) ;

constexpr ::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0* __get___8__1() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0*> __get___8__1() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x23df1e0 size 0x620 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x23df800 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MockBeatmapData*>", modifiers: "", def_value: None }, CppParam { name: "beatmap", ty: "::GlobalNamespace::BeatmapIdentifierNetSerializable*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MockBeatmapLoader*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>", modifiers: "", def_value: None }]
constexpr __MockBeatmapLoader___GetBeatmapData_d__2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MockBeatmapData*>  __t__builder, ::GlobalNamespace::BeatmapIdentifierNetSerializable*  beatmap, ::GlobalNamespace::MockBeatmapLoader*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__BeatmapLevelsModel__GetBeatmapLevelResult>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MockBeatmapLoader___GetBeatmapData_d__2(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x48>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MockBeatmapLoader___GetBeatmapData_d__2()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MockBeatmapLoader___GetBeatmapData_d__2, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MockBeatmapLoader
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5176))
// CS Name: ::MockBeatmapLoader*
class CORDL_TYPE MockBeatmapLoader : public ::System::Object {
public:
// Declarations
using _GetBeatmapData_d__2 = ::GlobalNamespace::__MockBeatmapLoader___GetBeatmapData_d__2;

using __c = ::GlobalNamespace::__MockBeatmapLoader____c;

using __c__DisplayClass2_0 = ::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _beatmapLevelsModel offset 0x10
 __declspec(property(get=__get__beatmapLevelsModel, put=__set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel*  _beatmapLevelsModel;

/// @brief Convert operator to "::GlobalNamespace::IMockBeatmapDataProvider"
constexpr operator  ::GlobalNamespace::IMockBeatmapDataProvider*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel*  value) ;

constexpr ::GlobalNamespace::BeatmapLevelsModel* __get__beatmapLevelsModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> __get__beatmapLevelsModel() const;

static inline ::GlobalNamespace::MockBeatmapLoader* New_ctor(::GlobalNamespace::BeatmapLevelsModel*  beatmapLevelsModel) ;

/// @brief Method .ctor addr 0x23deae8 size 0x28 virtual false final false
inline void _ctor(::GlobalNamespace::BeatmapLevelsModel*  beatmapLevelsModel) ;

/// @brief Method GetBeatmapData addr 0x23deb10 size 0x108 virtual true final true
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MockBeatmapData*>* GetBeatmapData(::GlobalNamespace::BeatmapIdentifierNetSerializable*  beatmap, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Dispose addr 0x23dec18 size 0x4 virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "", ty: "MockBeatmapLoader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MockBeatmapLoader(MockBeatmapLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockBeatmapLoader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockBeatmapLoader(MockBeatmapLoader const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MockBeatmapLoader()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockBeatmapLoader, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockBeatmapLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockBeatmapLoader*, "", "MockBeatmapLoader");
NEED_NO_BOX(::GlobalNamespace::__MockBeatmapLoader____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MockBeatmapLoader____c*, "", "MockBeatmapLoader/<>c");
NEED_NO_BOX(::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0*, "", "MockBeatmapLoader/<>c__DisplayClass2_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MockBeatmapLoader___GetBeatmapData_d__2, "", "MockBeatmapLoader/<GetBeatmapData>d__2");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MockBeatmapLoader____c__DisplayClass2_0____GetBeatmapData_b__3_d, "", "MockBeatmapLoader/<>c__DisplayClass2_0/<<GetBeatmapData>b__3>d");
