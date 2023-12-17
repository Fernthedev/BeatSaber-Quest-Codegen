#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputDeviceMatcher)
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputDeviceMatcher__MatcherJson;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Layouts {
class __InputDeviceMatcher___get_patterns_d__4;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::Layouts {
class __InputDeviceMatcher____c;
}
namespace GlobalNamespace {
struct __InputDeviceMatcher__MatcherJson__Capability;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Layouts {
class __InputDeviceMatcher____c;
}
namespace UnityEngine::InputSystem::Layouts {
class __InputDeviceMatcher___get_patterns_d__4;
}
namespace GlobalNamespace {
struct __InputDeviceMatcher__MatcherJson__Capability;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceMatcher;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputDeviceMatcher__MatcherJson;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c);
MARK_REF_PTR_T(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4);
MARK_VAL_T(::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson);
// Type: ::Capability
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6621))
// CS Name: ::InputDeviceMatcher::MatcherJson::Capability
struct CORDL_TYPE __InputDeviceMatcher__MatcherJson__Capability : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field path offset 0x0
 __declspec(property(get=__get_path, put=__set_path)) ::StringW  path;

/// @brief Field value offset 0x8
 __declspec(property(get=__get_value, put=__set_value)) ::StringW  value;

constexpr void __set_path(::StringW  value) ;

constexpr ::StringW& __get_path() ;

constexpr ::StringW const& __get_path() const;

constexpr void __set_value(::StringW  value) ;

constexpr ::StringW& __get_value() ;

constexpr ::StringW const& __get_value() const;

// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: None }]
constexpr __InputDeviceMatcher__MatcherJson__Capability(::StringW  path, ::StringW  value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputDeviceMatcher__MatcherJson__Capability(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputDeviceMatcher__MatcherJson__Capability()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MatcherJson
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6622))
// CS Name: ::InputDeviceMatcher::MatcherJson
struct CORDL_TYPE __InputDeviceMatcher__MatcherJson : public ::bs_hook::ValueTypeWrapper<0x58> {
public:
// Declarations
using Capability = ::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field interface offset 0x0
 __declspec(property(get=__get_interface, put=__set_interface)) ::StringW  interface;

/// @brief Field interfaces offset 0x8
 __declspec(property(get=__get_interfaces, put=__set_interfaces)) ::ArrayW<::StringW,::Array<::StringW>*>  interfaces;

/// @brief Field deviceClass offset 0x10
 __declspec(property(get=__get_deviceClass, put=__set_deviceClass)) ::StringW  deviceClass;

/// @brief Field deviceClasses offset 0x18
 __declspec(property(get=__get_deviceClasses, put=__set_deviceClasses)) ::ArrayW<::StringW,::Array<::StringW>*>  deviceClasses;

/// @brief Field manufacturer offset 0x20
 __declspec(property(get=__get_manufacturer, put=__set_manufacturer)) ::StringW  manufacturer;

/// @brief Field manufacturers offset 0x28
 __declspec(property(get=__get_manufacturers, put=__set_manufacturers)) ::ArrayW<::StringW,::Array<::StringW>*>  manufacturers;

/// @brief Field product offset 0x30
 __declspec(property(get=__get_product, put=__set_product)) ::StringW  product;

/// @brief Field products offset 0x38
 __declspec(property(get=__get_products, put=__set_products)) ::ArrayW<::StringW,::Array<::StringW>*>  products;

/// @brief Field version offset 0x40
 __declspec(property(get=__get_version, put=__set_version)) ::StringW  version;

/// @brief Field versions offset 0x48
 __declspec(property(get=__get_versions, put=__set_versions)) ::ArrayW<::StringW,::Array<::StringW>*>  versions;

/// @brief Field capabilities offset 0x50
 __declspec(property(get=__get_capabilities, put=__set_capabilities)) ::ArrayW<::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability,::Array<::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability>*>  capabilities;

constexpr void __set_interface(::StringW  value) ;

constexpr ::StringW& __get_interface() ;

constexpr ::StringW const& __get_interface() const;

constexpr void __set_interfaces(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_interfaces() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_interfaces() const;

constexpr void __set_deviceClass(::StringW  value) ;

constexpr ::StringW& __get_deviceClass() ;

constexpr ::StringW const& __get_deviceClass() const;

constexpr void __set_deviceClasses(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_deviceClasses() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_deviceClasses() const;

constexpr void __set_manufacturer(::StringW  value) ;

constexpr ::StringW& __get_manufacturer() ;

constexpr ::StringW const& __get_manufacturer() const;

constexpr void __set_manufacturers(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_manufacturers() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_manufacturers() const;

constexpr void __set_product(::StringW  value) ;

constexpr ::StringW& __get_product() ;

constexpr ::StringW const& __get_product() const;

constexpr void __set_products(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_products() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_products() const;

constexpr void __set_version(::StringW  value) ;

constexpr ::StringW& __get_version() ;

constexpr ::StringW const& __get_version() const;

constexpr void __set_versions(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_versions() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_versions() const;

constexpr void __set_capabilities(::ArrayW<::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability,::Array<::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability,::Array<::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability>*>& __get_capabilities() ;

constexpr ::ArrayW<::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability,::Array<::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability>*> const& __get_capabilities() const;

/// @brief Method FromMatcher addr 0x2b08ed8 size 0x334 virtual false final false
static inline ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson FromMatcher(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  matcher) ;

/// @brief Method ToMatcher addr 0x2b0926c size 0x2fc virtual false final false
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher ToMatcher() ;

// Ctor Parameters [CppParam { name: "interface", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "interfaces", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "deviceClass", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "deviceClasses", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "manufacturer", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "manufacturers", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "product", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "products", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "versions", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }, CppParam { name: "capabilities", ty: "::ArrayW<::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability,::Array<::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability>*>", modifiers: "", def_value: None }]
constexpr __InputDeviceMatcher__MatcherJson(::StringW  interface, ::ArrayW<::StringW,::Array<::StringW>*>  interfaces, ::StringW  deviceClass, ::ArrayW<::StringW,::Array<::StringW>*>  deviceClasses, ::StringW  manufacturer, ::ArrayW<::StringW,::Array<::StringW>*>  manufacturers, ::StringW  product, ::ArrayW<::StringW,::Array<::StringW>*>  products, ::StringW  version, ::ArrayW<::StringW,::Array<::StringW>*>  versions, ::ArrayW<::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability,::Array<::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability>*>  capabilities) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputDeviceMatcher__MatcherJson(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x58>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputDeviceMatcher__MatcherJson()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson, 0x58>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
// Type: ::<get_patterns>d__4
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6623))
// CS Name: ::InputDeviceMatcher::<get_patterns>d__4*
class CORDL_TYPE __InputDeviceMatcher___get_patterns_d__4 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>  __2__current;

/// @brief Field <>l__initialThreadId offset 0x28
 __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <>4__this offset 0x30
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  __4__this;

/// @brief Field <>3__<>4__this offset 0x38
 __declspec(property(get=__get___3____4__this, put=__set___3____4__this)) ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  __3____4__this;

/// @brief Field <count>5__2 offset 0x40
 __declspec(property(get=__get__count_5__2, put=__set__count_5__2)) int32_t  _count_5__2;

/// @brief Field <i>5__3 offset 0x44
 __declspec(property(get=__get__i_5__3, put=__set__i_5__3)) int32_t  _i_5__3;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Object___get_Current)) ::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>  System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Object___Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>  value) ;

constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>& __get___2__current() ;

constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*> const& __get___2__current() const;

constexpr void __set___l__initialThreadId(int32_t  value) ;

constexpr int32_t& __get___l__initialThreadId() ;

constexpr int32_t const& __get___l__initialThreadId() const;

constexpr void __set___4__this(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  value) ;

constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher& __get___4__this() ;

constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher const& __get___4__this() const;

constexpr void __set___3____4__this(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  value) ;

constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher& __get___3____4__this() ;

constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher const& __get___3____4__this() const;

constexpr void __set__count_5__2(int32_t  value) ;

constexpr int32_t& __get__count_5__2() ;

constexpr int32_t const& __get__count_5__2() const;

constexpr void __set__i_5__3(int32_t  value) ;

constexpr int32_t& __get__i_5__3() ;

constexpr int32_t const& __get__i_5__3() const;

static inline ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x2b09568 size 0x34 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2b0959c size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2b095a0 size 0x15c virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.get_Current addr 0x2b09750 size 0xc virtual true final true
inline ::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Object___get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2b0975c size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2b0979c size 0x5c virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.GetEnumerator addr 0x2b097f8 size 0xa4 virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>* System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_Object___GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2b0989c size 0x4 virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "__InputDeviceMatcher___get_patterns_d__4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputDeviceMatcher___get_patterns_d__4(__InputDeviceMatcher___get_patterns_d__4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputDeviceMatcher___get_patterns_d__4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputDeviceMatcher___get_patterns_d__4(__InputDeviceMatcher___get_patterns_d__4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputDeviceMatcher___get_patterns_d__4()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4, 0x48>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
// Type: ::<>c
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6624))
// CS Name: ::InputDeviceMatcher::<>c*
class CORDL_TYPE __InputDeviceMatcher____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c*  value) ;

static inline ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c* getStaticF___9() ;

static inline void setStaticF___9__11_0(::System::Func_2<char16_t,bool>*  value) ;

static inline ::System::Func_2<char16_t,bool>* getStaticF___9__11_0() ;

static inline ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c* New_ctor() ;

/// @brief Method .ctor addr 0x2b09904 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <With>b__11_0 addr 0x2b0990c size 0x88 virtual false final false
inline bool _With_b__11_0(char16_t  ch) ;

// Ctor Parameters [CppParam { name: "", ty: "__InputDeviceMatcher____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InputDeviceMatcher____c(__InputDeviceMatcher____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InputDeviceMatcher____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InputDeviceMatcher____c(__InputDeviceMatcher____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __InputDeviceMatcher____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__11_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
// Type: UnityEngine.InputSystem.Layouts::InputDeviceMatcher
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6625))
// CS Name: ::UnityEngine.InputSystem.Layouts::InputDeviceMatcher
struct CORDL_TYPE InputDeviceMatcher : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
using __c = ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c;

using _get_patterns_d__4 = ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4;

using MatcherJson = ::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Patterns offset 0x0
 __declspec(property(get=__get_m_Patterns, put=__set_m_Patterns)) ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Object*>,::Array<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Object*>>*>  m_Patterns;

 __declspec(property(get=get_empty)) bool  empty;

 __declspec(property(get=get_patterns)) ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>*  patterns;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>*() ;

constexpr void __set_m_Patterns(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Object*>,::Array<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Object*>>*>  value) ;

constexpr ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Object*>,::Array<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Object*>>*>& __get_m_Patterns() ;

constexpr ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Object*>,::Array<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Object*>>*> const& __get_m_Patterns() const;

static inline void setStaticF_kInterfaceKey(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_kInterfaceKey() ;

static inline void setStaticF_kDeviceClassKey(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_kDeviceClassKey() ;

static inline void setStaticF_kManufacturerKey(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_kManufacturerKey() ;

static inline void setStaticF_kProductKey(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_kProductKey() ;

static inline void setStaticF_kVersionKey(::UnityEngine::InputSystem::Utilities::InternedString  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_kVersionKey() ;

/// @brief Method get_empty addr 0x2b0720c size 0x10 virtual false final false
inline bool get_empty() ;

/// @brief Method get_patterns addr 0x2b0721c size 0x6c virtual false final false
inline ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>* get_patterns() ;

/// @brief Method WithInterface addr 0x2b07288 size 0x78 virtual false final false
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithInterface(::StringW  pattern, bool  supportRegex) ;

/// @brief Method WithDeviceClass addr 0x2b07510 size 0x78 virtual false final false
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithDeviceClass(::StringW  pattern, bool  supportRegex) ;

/// @brief Method WithManufacturer addr 0x2b07588 size 0x78 virtual false final false
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithManufacturer(::StringW  pattern, bool  supportRegex) ;

/// @brief Method WithProduct addr 0x2b07600 size 0x78 virtual false final false
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithProduct(::StringW  pattern, bool  supportRegex) ;

/// @brief Method WithVersion addr 0x2b07678 size 0x78 virtual false final false
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithVersion(::StringW  pattern, bool  supportRegex) ;

/// @brief Method WithCapability addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithCapability(::StringW  path, TValue  value) ;

/// @brief Method With addr 0x2b07300 size 0x210 virtual false final false
inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher With(::UnityEngine::InputSystem::Utilities::InternedString  key, ::System::Object*  value, bool  supportRegex) ;

/// @brief Method MatchPercentage addr 0x2b01c20 size 0x37c virtual false final false
inline float_t MatchPercentage(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  deviceDescription) ;

/// @brief Method MatchSingleProperty addr 0x2b076f0 size 0xd8 virtual false final false
static inline bool MatchSingleProperty(::System::Object*  pattern, ::StringW  value) ;

/// @brief Method GetNumPropertiesIn addr 0x2b077c8 size 0xc4 virtual false final false
static inline int32_t GetNumPropertiesIn(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description) ;

/// @brief Method FromDeviceDescription addr 0x2b0788c size 0xec virtual false final false
static inline ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher FromDeviceDescription(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  deviceDescription) ;

/// @brief Method ToString addr 0x2b07978 size 0x198 virtual true final false
inline ::StringW ToString() ;

/// @brief Method Equals addr 0x2b07b10 size 0x158 virtual true final true
inline bool Equals(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  other) ;

/// @brief Method Equals addr 0x2b07c68 size 0x78 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method op_Equality addr 0x2b03048 size 0x1c virtual false final false
static inline bool op_Equality(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  left, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  right) ;

/// @brief Method op_Inequality addr 0x2b07ce0 size 0x74 virtual false final false
static inline bool op_Inequality(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  left, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher  right) ;

/// @brief Method GetHashCode addr 0x2b07d54 size 0x18 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "m_Patterns", ty: "::ArrayW<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Object*>,::Array<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Object*>>*>", modifiers: "", def_value: None }]
constexpr InputDeviceMatcher(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Object*>,::Array<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString,::System::Object*>>*>  m_Patterns) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputDeviceMatcher(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputDeviceMatcher()  = default;


// Fields

// Static field kInterfaceKey

// Static field kDeviceClassKey

// Static field kManufacturerKey

// Static field kProductKey

// Static field kVersionKey


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher____c*, "UnityEngine.InputSystem.Layouts", "InputDeviceMatcher/<>c");
NEED_NO_BOX(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher___get_patterns_d__4*, "UnityEngine.InputSystem.Layouts", "InputDeviceMatcher/<get_patterns>d__4");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InputDeviceMatcher__MatcherJson__Capability, "UnityEngine.InputSystem.Layouts", "InputDeviceMatcher/MatcherJson/Capability");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher, "UnityEngine.InputSystem.Layouts", "InputDeviceMatcher");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputDeviceMatcher__MatcherJson, "UnityEngine.InputSystem.Layouts", "InputDeviceMatcher/MatcherJson");
