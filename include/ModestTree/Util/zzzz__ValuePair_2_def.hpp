#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ValuePair_2)
namespace System {
class Object;
}
// Forward declare root types
namespace ModestTree::Util {
template<typename T1,typename T2>
class ValuePair_2;
}
namespace ModestTree::Util {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
class ValuePair_2<T1,T2>;
}
namespace ModestTree::Util {
template<::il2cpp_utils::il2cpp_reference_type T1>
class ValuePair_2<T1,int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::ModestTree::Util::ValuePair_2);
// Type: ModestTree.Util::ValuePair`2
// Type: ModestTree.Util::ValuePair`2
namespace ModestTree::Util {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10626))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10626), inst: 1629 })
// CS Name: ::ModestTree.Util::ValuePair`2<T1,T2>*
class CORDL_TYPE ValuePair_2<T1,int32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field First offset 0x10
 __declspec(property(get=__get_First, put=__set_First)) T1  First;

/// @brief Field Second offset 0x18
 __declspec(property(get=__get_Second, put=__set_Second)) int32_t  Second;

constexpr void __set_First(T1  value) ;

constexpr T1& __get_First() ;

constexpr T1 const& __get_First() const;

constexpr void __set_Second(int32_t  value) ;

constexpr int32_t& __get_Second() ;

constexpr int32_t const& __get_Second() const;

static inline ::ModestTree::Util::ValuePair_2<T1,int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::ModestTree::Util::ValuePair_2<T1,int32_t>* New_ctor(T1  first, int32_t  second) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T1  first, int32_t  second) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Equals(::ModestTree::Util::ValuePair_2<T1,int32_t>*  that) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "", ty: "ValuePair_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ValuePair_2(ValuePair_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValuePair_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValuePair_2(ValuePair_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ValuePair_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree::Util
// Type: ModestTree.Util::ValuePair`2
namespace ModestTree::Util {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10626)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10626), inst: 81 })
// CS Name: ::ModestTree.Util::ValuePair`2<T1,T2>*
class CORDL_TYPE ValuePair_2<T1,T2> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field First offset 0x10
 __declspec(property(get=__get_First, put=__set_First)) T1  First;

/// @brief Field Second offset 0x18
 __declspec(property(get=__get_Second, put=__set_Second)) T2  Second;

constexpr void __set_First(T1  value) ;

constexpr T1& __get_First() ;

constexpr T1 const& __get_First() const;

constexpr void __set_Second(T2  value) ;

constexpr T2& __get_Second() ;

constexpr T2 const& __get_Second() const;

static inline ::ModestTree::Util::ValuePair_2<T1,T2>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::ModestTree::Util::ValuePair_2<T1,T2>* New_ctor(T1  first, T2  second) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T1  first, T2  second) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Equals(::ModestTree::Util::ValuePair_2<T1,T2>*  that) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "", ty: "ValuePair_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ValuePair_2(ValuePair_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValuePair_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValuePair_2(ValuePair_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ValuePair_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::ModestTree::Util::ValuePair_2, "ModestTree.Util", "ValuePair`2");
