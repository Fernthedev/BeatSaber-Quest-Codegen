#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnableAfterDelay)
namespace GlobalNamespace {
class __EnableAfterDelay___Start_d__1;
}
namespace UnityEngine {
class MonoBehaviour;
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
// Forward declare root types
namespace GlobalNamespace {
class EnableAfterDelay;
}
namespace GlobalNamespace {
class __EnableAfterDelay___Start_d__1;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnableAfterDelay);
MARK_REF_PTR_T(::GlobalNamespace::__EnableAfterDelay___Start_d__1);
// Type: ::<Start>d__1
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14360))
// CS Name: ::EnableAfterDelay::<Start>d__1*
class CORDL_TYPE __EnableAfterDelay___Start_d__1 : public ::System::Object {
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
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::EnableAfterDelay*  __4__this;

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

constexpr void __set___4__this(::GlobalNamespace::EnableAfterDelay*  value) ;

constexpr ::GlobalNamespace::EnableAfterDelay* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnableAfterDelay*> __get___4__this() const;

static inline ::GlobalNamespace::__EnableAfterDelay___Start_d__1* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x20f1f08 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20f1f38 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20f1f3c size 0xac virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20f1fe8 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20f1ff0 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20f2030 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__EnableAfterDelay___Start_d__1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__EnableAfterDelay___Start_d__1(__EnableAfterDelay___Start_d__1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__EnableAfterDelay___Start_d__1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__EnableAfterDelay___Start_d__1(__EnableAfterDelay___Start_d__1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __EnableAfterDelay___Start_d__1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EnableAfterDelay___Start_d__1, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::EnableAfterDelay
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14361))
// CS Name: ::EnableAfterDelay*
class CORDL_TYPE EnableAfterDelay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__1 = ::GlobalNamespace::__EnableAfterDelay___Start_d__1;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _component offset 0x18
 __declspec(property(get=__get__component, put=__set__component)) ::UnityEngine::MonoBehaviour*  _component;

constexpr void __set__component(::UnityEngine::MonoBehaviour*  value) ;

constexpr ::UnityEngine::MonoBehaviour* __get__component() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MonoBehaviour*> __get__component() const;

/// @brief Method Start addr 0x20f1ea0 size 0x68 virtual false final false
inline ::System::Collections::IEnumerator* Start() ;

static inline ::GlobalNamespace::EnableAfterDelay* New_ctor() ;

/// @brief Method .ctor addr 0x20f1f30 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "EnableAfterDelay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnableAfterDelay(EnableAfterDelay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnableAfterDelay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnableAfterDelay(EnableAfterDelay const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnableAfterDelay()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnableAfterDelay, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnableAfterDelay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnableAfterDelay*, "", "EnableAfterDelay");
NEED_NO_BOX(::GlobalNamespace::__EnableAfterDelay___Start_d__1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EnableAfterDelay___Start_d__1*, "", "EnableAfterDelay/<Start>d__1");
