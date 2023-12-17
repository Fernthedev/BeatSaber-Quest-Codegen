#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MissionMapAnimationController)
namespace HMUI {
class ScrollView;
}
namespace GlobalNamespace {
class MenuShockwave;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class __MissionMapAnimationController___UpdateMissionMapCoroutine_d__12;
}
namespace GlobalNamespace {
class __MissionMapAnimationController____c;
}
namespace GlobalNamespace {
class __MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15;
}
namespace GlobalNamespace {
class MissionNodesManager;
}
namespace GlobalNamespace {
class MissionNode;
}
namespace GlobalNamespace {
class __MissionMapAnimationController___UpdateStageCoroutine_d__14;
}
namespace GlobalNamespace {
class __MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class MissionNodeConnection;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionMapAnimationController;
}
namespace GlobalNamespace {
class __MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13;
}
namespace GlobalNamespace {
class __MissionMapAnimationController___UpdateMissionMapCoroutine_d__12;
}
namespace GlobalNamespace {
class __MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15;
}
namespace GlobalNamespace {
class __MissionMapAnimationController___UpdateStageCoroutine_d__14;
}
namespace GlobalNamespace {
class __MissionMapAnimationController____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionMapAnimationController);
MARK_REF_PTR_T(::GlobalNamespace::__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13);
MARK_REF_PTR_T(::GlobalNamespace::__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12);
MARK_REF_PTR_T(::GlobalNamespace::__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15);
MARK_REF_PTR_T(::GlobalNamespace::__MissionMapAnimationController___UpdateStageCoroutine_d__14);
MARK_REF_PTR_T(::GlobalNamespace::__MissionMapAnimationController____c);
// Type: ::<UpdateMissionMapCoroutine>d__12
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5537))
// CS Name: ::MissionMapAnimationController::<UpdateMissionMapCoroutine>d__12*
class CORDL_TYPE __MissionMapAnimationController___UpdateMissionMapCoroutine_d__12 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::MissionMapAnimationController*  __4__this;

/// @brief Field lastClearedMissionNode offset 0x28
 __declspec(property(get=__get_lastClearedMissionNode, put=__set_lastClearedMissionNode)) ::GlobalNamespace::MissionNode*  lastClearedMissionNode;

/// @brief Field finishCallback offset 0x30
 __declspec(property(get=__get_finishCallback, put=__set_finishCallback)) ::System::Action*  finishCallback;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::System::Object*  value) ;

constexpr ::System::Object* __get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get___2__current() const;

constexpr void __set___4__this(::GlobalNamespace::MissionMapAnimationController*  value) ;

constexpr ::GlobalNamespace::MissionMapAnimationController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionMapAnimationController*> __get___4__this() const;

constexpr void __set_lastClearedMissionNode(::GlobalNamespace::MissionNode*  value) ;

constexpr ::GlobalNamespace::MissionNode* __get_lastClearedMissionNode() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNode*> __get_lastClearedMissionNode() const;

constexpr void __set_finishCallback(::System::Action*  value) ;

constexpr ::System::Action* __get_finishCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_finishCallback() const;

static inline ::GlobalNamespace::__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x229f604 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x229f7fc size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x229f800 size 0x1f8 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x229f9f8 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x229fa00 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x229fa40 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12(__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12(__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MissionMapAnimationController___UpdateMissionMapCoroutine_d__12()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<UpdateClearedNodeStateCoroutine>d__13
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5538))
// CS Name: ::MissionMapAnimationController::<UpdateClearedNodeStateCoroutine>d__13*
class CORDL_TYPE __MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Object*  __2__current;

/// @brief Field lastClearedMissionNode offset 0x20
 __declspec(property(get=__get_lastClearedMissionNode, put=__set_lastClearedMissionNode)) ::GlobalNamespace::MissionNode*  lastClearedMissionNode;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::MissionMapAnimationController*  __4__this;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::System::Object*  value) ;

constexpr ::System::Object* __get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get___2__current() const;

constexpr void __set_lastClearedMissionNode(::GlobalNamespace::MissionNode*  value) ;

constexpr ::GlobalNamespace::MissionNode* __get_lastClearedMissionNode() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNode*> __get_lastClearedMissionNode() const;

constexpr void __set___4__this(::GlobalNamespace::MissionMapAnimationController*  value) ;

constexpr ::GlobalNamespace::MissionMapAnimationController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionMapAnimationController*> __get___4__this() const;

static inline ::GlobalNamespace::__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x229f6a0 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x229fa48 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x229fa4c size 0xf0 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x229fb48 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x229fb50 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x229fb90 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13(__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13(__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<UpdateStageCoroutine>d__14
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5539))
// CS Name: ::MissionMapAnimationController::<UpdateStageCoroutine>d__14*
class CORDL_TYPE __MissionMapAnimationController___UpdateStageCoroutine_d__14 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::MissionMapAnimationController*  __4__this;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::System::Object*  value) ;

constexpr ::System::Object* __get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get___2__current() const;

constexpr void __set___4__this(::GlobalNamespace::MissionMapAnimationController*  value) ;

constexpr ::GlobalNamespace::MissionMapAnimationController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionMapAnimationController*> __get___4__this() const;

static inline ::GlobalNamespace::__MissionMapAnimationController___UpdateStageCoroutine_d__14* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x229f730 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x229fb98 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x229fb9c size 0x9c virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x229fdf8 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x229fe00 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x229fe40 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__MissionMapAnimationController___UpdateStageCoroutine_d__14", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MissionMapAnimationController___UpdateStageCoroutine_d__14(__MissionMapAnimationController___UpdateStageCoroutine_d__14 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MissionMapAnimationController___UpdateStageCoroutine_d__14", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MissionMapAnimationController___UpdateStageCoroutine_d__14(__MissionMapAnimationController___UpdateStageCoroutine_d__14 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MissionMapAnimationController___UpdateStageCoroutine_d__14()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionMapAnimationController___UpdateStageCoroutine_d__14, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5540))
// CS Name: ::MissionMapAnimationController::<>c*
class CORDL_TYPE __MissionMapAnimationController____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__MissionMapAnimationController____c*  value) ;

static inline ::GlobalNamespace::__MissionMapAnimationController____c* getStaticF___9() ;

static inline void setStaticF___9__15_0(::System::Func_2<::GlobalNamespace::MissionNodeConnection*,float_t>*  value) ;

static inline ::System::Func_2<::GlobalNamespace::MissionNodeConnection*,float_t>* getStaticF___9__15_0() ;

static inline void setStaticF___9__15_1(::System::Func_2<::GlobalNamespace::MissionNodeConnection*,float_t>*  value) ;

static inline ::System::Func_2<::GlobalNamespace::MissionNodeConnection*,float_t>* getStaticF___9__15_1() ;

static inline ::GlobalNamespace::__MissionMapAnimationController____c* New_ctor() ;

/// @brief Method .ctor addr 0x229feac size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <UpdateNodesAndConnectionCoroutine>b__15_0 addr 0x229feb4 size 0x24 virtual false final false
inline float_t _UpdateNodesAndConnectionCoroutine_b__15_0(::GlobalNamespace::MissionNodeConnection*  connection) ;

/// @brief Method <UpdateNodesAndConnectionCoroutine>b__15_1 addr 0x229fef4 size 0x24 virtual false final false
inline float_t _UpdateNodesAndConnectionCoroutine_b__15_1(::GlobalNamespace::MissionNodeConnection*  connection) ;

// Ctor Parameters [CppParam { name: "", ty: "__MissionMapAnimationController____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MissionMapAnimationController____c(__MissionMapAnimationController____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MissionMapAnimationController____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MissionMapAnimationController____c(__MissionMapAnimationController____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MissionMapAnimationController____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__15_0

// Static field <>9__15_1


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionMapAnimationController____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<UpdateNodesAndConnectionCoroutine>d__15
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5541))
// CS Name: ::MissionMapAnimationController::<UpdateNodesAndConnectionCoroutine>d__15*
class CORDL_TYPE __MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::MissionMapAnimationController*  __4__this;

/// @brief Field <newEnabledConnection>5__2 offset 0x28
 __declspec(property(get=__get__newEnabledConnection_5__2, put=__set__newEnabledConnection_5__2)) ::ArrayW<::GlobalNamespace::MissionNodeConnection*,::Array<::GlobalNamespace::MissionNodeConnection*>*>  _newEnabledConnection_5__2;

/// @brief Field <>7__wrap2 offset 0x30
 __declspec(property(get=__get___7__wrap2, put=__set___7__wrap2)) ::ArrayW<::GlobalNamespace::MissionNodeConnection*,::Array<::GlobalNamespace::MissionNodeConnection*>*>  __7__wrap2;

/// @brief Field <>7__wrap3 offset 0x38
 __declspec(property(get=__get___7__wrap3, put=__set___7__wrap3)) int32_t  __7__wrap3;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::System::Object*  value) ;

constexpr ::System::Object* __get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get___2__current() const;

constexpr void __set___4__this(::GlobalNamespace::MissionMapAnimationController*  value) ;

constexpr ::GlobalNamespace::MissionMapAnimationController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionMapAnimationController*> __get___4__this() const;

constexpr void __set__newEnabledConnection_5__2(::ArrayW<::GlobalNamespace::MissionNodeConnection*,::Array<::GlobalNamespace::MissionNodeConnection*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::MissionNodeConnection*,::Array<::GlobalNamespace::MissionNodeConnection*>*>& __get__newEnabledConnection_5__2() ;

constexpr ::ArrayW<::GlobalNamespace::MissionNodeConnection*,::Array<::GlobalNamespace::MissionNodeConnection*>*> const& __get__newEnabledConnection_5__2() const;

constexpr void __set___7__wrap2(::ArrayW<::GlobalNamespace::MissionNodeConnection*,::Array<::GlobalNamespace::MissionNodeConnection*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::MissionNodeConnection*,::Array<::GlobalNamespace::MissionNodeConnection*>*>& __get___7__wrap2() ;

constexpr ::ArrayW<::GlobalNamespace::MissionNodeConnection*,::Array<::GlobalNamespace::MissionNodeConnection*>*> const& __get___7__wrap2() const;

constexpr void __set___7__wrap3(int32_t  value) ;

constexpr int32_t& __get___7__wrap3() ;

constexpr int32_t const& __get___7__wrap3() const;

static inline ::GlobalNamespace::__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x229f7c0 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x229ff18 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x229ff1c size 0x310 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x22a0478 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x22a0480 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x22a04c0 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15(__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15(__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MissionMapAnimationController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5542))
// CS Name: ::MissionMapAnimationController*
class CORDL_TYPE MissionMapAnimationController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _UpdateNodesAndConnectionCoroutine_d__15 = ::GlobalNamespace::__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15;

using __c = ::GlobalNamespace::__MissionMapAnimationController____c;

using _UpdateStageCoroutine_d__14 = ::GlobalNamespace::__MissionMapAnimationController___UpdateStageCoroutine_d__14;

using _UpdateClearedNodeStateCoroutine_d__13 = ::GlobalNamespace::__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13;

using _UpdateMissionMapCoroutine_d__12 = ::GlobalNamespace::__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _missionNodesManager offset 0x18
 __declspec(property(get=__get__missionNodesManager, put=__set__missionNodesManager)) ::GlobalNamespace::MissionNodesManager*  _missionNodesManager;

/// @brief Field _mapScrollView offset 0x20
 __declspec(property(get=__get__mapScrollView, put=__set__mapScrollView)) ::HMUI::ScrollView*  _mapScrollView;

/// @brief Field _startDelay offset 0x28
 __declspec(property(get=__get__startDelay, put=__set__startDelay)) float_t  _startDelay;

/// @brief Field _stageAnimationStartDelay offset 0x2c
 __declspec(property(get=__get__stageAnimationStartDelay, put=__set__stageAnimationStartDelay)) float_t  _stageAnimationStartDelay;

/// @brief Field _missionConnectionAnimationStartDelay offset 0x30
 __declspec(property(get=__get__missionConnectionAnimationStartDelay, put=__set__missionConnectionAnimationStartDelay)) float_t  _missionConnectionAnimationStartDelay;

/// @brief Field _missionConnectionAnimationSeparationTime offset 0x34
 __declspec(property(get=__get__missionConnectionAnimationSeparationTime, put=__set__missionConnectionAnimationSeparationTime)) float_t  _missionConnectionAnimationSeparationTime;

/// @brief Field _stageAnimationDuration offset 0x38
 __declspec(property(get=__get__stageAnimationDuration, put=__set__stageAnimationDuration)) float_t  _stageAnimationDuration;

/// @brief Field _shockwaveEffect offset 0x40
 __declspec(property(get=__get__shockwaveEffect, put=__set__shockwaveEffect)) ::GlobalNamespace::MenuShockwave*  _shockwaveEffect;

 __declspec(property(get=get_animatedUpdateIsRequired)) bool  animatedUpdateIsRequired;

constexpr void __set__missionNodesManager(::GlobalNamespace::MissionNodesManager*  value) ;

constexpr ::GlobalNamespace::MissionNodesManager* __get__missionNodesManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNodesManager*> __get__missionNodesManager() const;

constexpr void __set__mapScrollView(::HMUI::ScrollView*  value) ;

constexpr ::HMUI::ScrollView* __get__mapScrollView() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ScrollView*> __get__mapScrollView() const;

constexpr void __set__startDelay(float_t  value) ;

constexpr float_t& __get__startDelay() ;

constexpr float_t const& __get__startDelay() const;

constexpr void __set__stageAnimationStartDelay(float_t  value) ;

constexpr float_t& __get__stageAnimationStartDelay() ;

constexpr float_t const& __get__stageAnimationStartDelay() const;

constexpr void __set__missionConnectionAnimationStartDelay(float_t  value) ;

constexpr float_t& __get__missionConnectionAnimationStartDelay() ;

constexpr float_t const& __get__missionConnectionAnimationStartDelay() const;

constexpr void __set__missionConnectionAnimationSeparationTime(float_t  value) ;

constexpr float_t& __get__missionConnectionAnimationSeparationTime() ;

constexpr float_t const& __get__missionConnectionAnimationSeparationTime() const;

constexpr void __set__stageAnimationDuration(float_t  value) ;

constexpr float_t& __get__stageAnimationDuration() ;

constexpr float_t const& __get__stageAnimationDuration() const;

constexpr void __set__shockwaveEffect(::GlobalNamespace::MenuShockwave*  value) ;

constexpr ::GlobalNamespace::MenuShockwave* __get__shockwaveEffect() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuShockwave*> __get__shockwaveEffect() const;

/// @brief Method get_animatedUpdateIsRequired addr 0x229f128 size 0x74 virtual false final false
inline bool get_animatedUpdateIsRequired() ;

/// @brief Method ScrollToTopMostNotClearedMission addr 0x229f24c size 0xcc virtual false final false
inline void ScrollToTopMostNotClearedMission() ;

/// @brief Method UpdateMissionMapAfterMissionWasCleared addr 0x229f464 size 0xe8 virtual false final false
inline void UpdateMissionMapAfterMissionWasCleared(bool  animated, ::System::Action*  finishCallback) ;

/// @brief Method UpdateMissionMapCoroutine addr 0x229f588 size 0x7c virtual false final false
inline ::System::Collections::IEnumerator* UpdateMissionMapCoroutine(::GlobalNamespace::MissionNode*  lastClearedMissionNode, ::System::Action*  finishCallback) ;

/// @brief Method UpdateClearedNodeStateCoroutine addr 0x229f62c size 0x74 virtual false final false
inline ::System::Collections::IEnumerator* UpdateClearedNodeStateCoroutine(::GlobalNamespace::MissionNode*  lastClearedMissionNode) ;

/// @brief Method UpdateStageCoroutine addr 0x229f6c8 size 0x68 virtual false final false
inline ::System::Collections::IEnumerator* UpdateStageCoroutine() ;

/// @brief Method UpdateNodesAndConnectionCoroutine addr 0x229f758 size 0x68 virtual false final false
inline ::System::Collections::IEnumerator* UpdateNodesAndConnectionCoroutine() ;

static inline ::GlobalNamespace::MissionMapAnimationController* New_ctor() ;

/// @brief Method .ctor addr 0x229f7e8 size 0x14 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MissionMapAnimationController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissionMapAnimationController(MissionMapAnimationController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissionMapAnimationController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissionMapAnimationController(MissionMapAnimationController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MissionMapAnimationController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionMapAnimationController, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionMapAnimationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionMapAnimationController*, "", "MissionMapAnimationController");
NEED_NO_BOX(::GlobalNamespace::__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionMapAnimationController___UpdateClearedNodeStateCoroutine_d__13*, "", "MissionMapAnimationController/<UpdateClearedNodeStateCoroutine>d__13");
NEED_NO_BOX(::GlobalNamespace::__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionMapAnimationController___UpdateMissionMapCoroutine_d__12*, "", "MissionMapAnimationController/<UpdateMissionMapCoroutine>d__12");
NEED_NO_BOX(::GlobalNamespace::__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionMapAnimationController___UpdateNodesAndConnectionCoroutine_d__15*, "", "MissionMapAnimationController/<UpdateNodesAndConnectionCoroutine>d__15");
NEED_NO_BOX(::GlobalNamespace::__MissionMapAnimationController___UpdateStageCoroutine_d__14);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionMapAnimationController___UpdateStageCoroutine_d__14*, "", "MissionMapAnimationController/<UpdateStageCoroutine>d__14");
NEED_NO_BOX(::GlobalNamespace::__MissionMapAnimationController____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionMapAnimationController____c*, "", "MissionMapAnimationController/<>c");
