#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ValuePair_4)
namespace System {
class Object;
}
// Forward declare root types
namespace ModestTree::Util {
template<typename T1,typename T2,typename T3,typename T4>
class ValuePair_4;
}
namespace ModestTree::Util {
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3,::il2cpp_utils::il2cpp_reference_type T4>
class ValuePair_4<T1,T2,T3,T4>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::ModestTree::Util::ValuePair_4);
// Type: ModestTree.Util::ValuePair`4
// Type: ModestTree.Util::ValuePair`4
namespace ModestTree::Util {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1,::il2cpp_utils::il2cpp_reference_type T2,::il2cpp_utils::il2cpp_reference_type T3,::il2cpp_utils::il2cpp_reference_type T4>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10628)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10628), inst: 6124 })
// CS Name: ::ModestTree.Util::ValuePair`4<T1,T2,T3,T4>*
class CORDL_TYPE ValuePair_4<T1,T2,T3,T4> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field First offset 0x10
 __declspec(property(get=__get_First, put=__set_First)) T1  First;

/// @brief Field Second offset 0x18
 __declspec(property(get=__get_Second, put=__set_Second)) T2  Second;

/// @brief Field Third offset 0x20
 __declspec(property(get=__get_Third, put=__set_Third)) T3  Third;

/// @brief Field Fourth offset 0x28
 __declspec(property(get=__get_Fourth, put=__set_Fourth)) T4  Fourth;

constexpr void __set_First(T1  value) ;

constexpr T1& __get_First() ;

constexpr T1 const& __get_First() const;

constexpr void __set_Second(T2  value) ;

constexpr T2& __get_Second() ;

constexpr T2 const& __get_Second() const;

constexpr void __set_Third(T3  value) ;

constexpr T3& __get_Third() ;

constexpr T3 const& __get_Third() const;

constexpr void __set_Fourth(T4  value) ;

constexpr T4& __get_Fourth() ;

constexpr T4 const& __get_Fourth() const;

static inline ::ModestTree::Util::ValuePair_4<T1,T2,T3,T4>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::ModestTree::Util::ValuePair_4<T1,T2,T3,T4>* New_ctor(T1  first, T2  second, T3  third, T4  fourth) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T1  first, T2  second, T3  third, T4  fourth) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Equals(::ModestTree::Util::ValuePair_4<T1,T2,T3,T4>*  that) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "", ty: "ValuePair_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ValuePair_4(ValuePair_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValuePair_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValuePair_4(ValuePair_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ValuePair_4()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ModestTree::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::ModestTree::Util::ValuePair_4, "ModestTree.Util", "ValuePair`4");
