#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SortedSet_1)
namespace System::Collections::Generic {
template<typename T>
struct __SortedSet_1__Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class __SortedSet_1____c__DisplayClass52_0;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections {
class ICollection;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class __SortedSet_1__Node;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Array;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Collections::Generic {
template<typename T>
struct __SortedSet_1__ElementCount;
}
namespace System::Collections::Generic {
template<typename T>
class __SortedSet_1____c__DisplayClass53_0;
}
namespace System::Collections::Generic {
template<typename T>
class TreeWalkPredicate_1;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Collections::Generic {
struct NodeColor;
}
namespace System::Collections::Generic {
struct TreeRotation;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class SortedSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class __SortedSet_1__Node;
}
namespace System::Collections::Generic {
template<typename T>
class __SortedSet_1____c__DisplayClass52_0;
}
namespace System::Collections::Generic {
template<typename T>
class __SortedSet_1____c__DisplayClass53_0;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T>
class SortedSet_1<T>;
}
namespace System::Collections::Generic {
template<>
class SortedSet_1<uint32_t>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T>
class __SortedSet_1__Node<T>;
}
namespace System::Collections::Generic {
template<>
class __SortedSet_1__Node<uint32_t>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T>
class __SortedSet_1____c__DisplayClass52_0<T>;
}
namespace System::Collections::Generic {
template<>
class __SortedSet_1____c__DisplayClass52_0<uint32_t>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T>
class __SortedSet_1____c__DisplayClass53_0<T>;
}
namespace System::Collections::Generic {
template<>
class __SortedSet_1____c__DisplayClass53_0<uint32_t>;
}
namespace System::Collections::Generic {
template<typename T>
struct __SortedSet_1__Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
struct __SortedSet_1__ElementCount;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T>
struct __SortedSet_1__Enumerator<T>;
}
namespace System::Collections::Generic {
template<>
struct __SortedSet_1__Enumerator<uint32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::SortedSet_1);
MARK_GEN_REF_PTR_T(::System::Collections::Generic::__SortedSet_1__Node);
MARK_GEN_REF_PTR_T(::System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0);
MARK_GEN_REF_PTR_T(::System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0);
MARK_GEN_VAL_T(::System::Collections::Generic::__SortedSet_1__Enumerator);
MARK_GEN_VAL_T(::System::Collections::Generic::__SortedSet_1__ElementCount);
// Type: ::Node
// Type: ::Enumerator
// Type: ::ElementCount
namespace System::Collections::Generic {
// cpp template
template<typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9538))
// CS Name: ::SortedSet`1::ElementCount<T>
struct CORDL_TYPE __SortedSet_1__ElementCount : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field UniqueCount offset 0x0
 __declspec(property(get=__get_UniqueCount, put=__set_UniqueCount)) int32_t  UniqueCount;

/// @brief Field UnfoundCount offset 0x4
 __declspec(property(get=__get_UnfoundCount, put=__set_UnfoundCount)) int32_t  UnfoundCount;

constexpr void __set_UniqueCount(int32_t  value) ;

constexpr int32_t& __get_UniqueCount() ;

constexpr int32_t const& __get_UniqueCount() const;

constexpr void __set_UnfoundCount(int32_t  value) ;

constexpr int32_t& __get_UnfoundCount() ;

constexpr int32_t const& __get_UnfoundCount() const;

// Ctor Parameters [CppParam { name: "UniqueCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "UnfoundCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __SortedSet_1__ElementCount(int32_t  UniqueCount, int32_t  UnfoundCount) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __SortedSet_1__ElementCount(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __SortedSet_1__ElementCount()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::<>c__DisplayClass52_0
// Type: ::<>c__DisplayClass53_0
// Type: System.Collections.Generic::SortedSet`1
// Type: ::Node
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9536))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9536), inst: 753 })
// CS Name: ::SortedSet`1::Node<T>*
class CORDL_TYPE __SortedSet_1__Node<uint32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field <Item>k__BackingField offset 0x10
 __declspec(property(get=__get__Item_k__BackingField, put=__set__Item_k__BackingField)) uint32_t  _Item_k__BackingField;

/// @brief Field <Left>k__BackingField offset 0x18
 __declspec(property(get=__get__Left_k__BackingField, put=__set__Left_k__BackingField)) ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  _Left_k__BackingField;

/// @brief Field <Right>k__BackingField offset 0x20
 __declspec(property(get=__get__Right_k__BackingField, put=__set__Right_k__BackingField)) ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  _Right_k__BackingField;

/// @brief Field <Color>k__BackingField offset 0x28
 __declspec(property(get=__get__Color_k__BackingField, put=__set__Color_k__BackingField)) ::System::Collections::Generic::NodeColor  _Color_k__BackingField;

 __declspec(property(get=get_Item, put=set_Item)) uint32_t  Item;

 __declspec(property(get=get_Left, put=set_Left)) ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  Left;

 __declspec(property(get=get_Right, put=set_Right)) ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  Right;

 __declspec(property(get=get_Color, put=set_Color)) ::System::Collections::Generic::NodeColor  Color;

 __declspec(property(get=get_IsBlack)) bool  IsBlack;

 __declspec(property(get=get_IsRed)) bool  IsRed;

 __declspec(property(get=get_Is2Node)) bool  Is2Node;

 __declspec(property(get=get_Is4Node)) bool  Is4Node;

constexpr void __set__Item_k__BackingField(uint32_t  value) ;

constexpr uint32_t& __get__Item_k__BackingField() ;

constexpr uint32_t const& __get__Item_k__BackingField() const;

constexpr void __set__Left_k__BackingField(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  value) ;

constexpr ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* __get__Left_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*> __get__Left_k__BackingField() const;

constexpr void __set__Right_k__BackingField(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  value) ;

constexpr ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* __get__Right_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*> __get__Right_k__BackingField() const;

constexpr void __set__Color_k__BackingField(::System::Collections::Generic::NodeColor  value) ;

constexpr ::System::Collections::Generic::NodeColor& __get__Color_k__BackingField() ;

constexpr ::System::Collections::Generic::NodeColor const& __get__Color_k__BackingField() const;

static inline ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* New_ctor(uint32_t  item, ::System::Collections::Generic::NodeColor  color) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(uint32_t  item, ::System::Collections::Generic::NodeColor  color) ;

/// @brief Method IsNonNullRed addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool IsNonNullRed(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  node) ;

/// @brief Method IsNullOrBlack addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool IsNullOrBlack(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  node) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint32_t get_Item() ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(uint32_t  value) ;

/// @brief Method get_Left addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* get_Left() ;

/// @brief Method set_Left addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Left(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  value) ;

/// @brief Method get_Right addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* get_Right() ;

/// @brief Method set_Right addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Right(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  value) ;

/// @brief Method get_Color addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::NodeColor get_Color() ;

/// @brief Method set_Color addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Color(::System::Collections::Generic::NodeColor  value) ;

/// @brief Method get_IsBlack addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsBlack() ;

/// @brief Method get_IsRed addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsRed() ;

/// @brief Method get_Is2Node addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_Is2Node() ;

/// @brief Method get_Is4Node addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_Is4Node() ;

/// @brief Method ColorBlack addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ColorBlack() ;

/// @brief Method ColorRed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ColorRed() ;

/// @brief Method GetRotation addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::TreeRotation GetRotation(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  current, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  sibling) ;

/// @brief Method GetSibling addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* GetSibling(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  node) ;

/// @brief Method Split4Node addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Split4Node() ;

/// @brief Method Rotate addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* Rotate(::System::Collections::Generic::TreeRotation  rotation) ;

/// @brief Method RotateLeft addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* RotateLeft() ;

/// @brief Method RotateLeftRight addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* RotateLeftRight() ;

/// @brief Method RotateRight addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* RotateRight() ;

/// @brief Method RotateRightLeft addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* RotateRightLeft() ;

/// @brief Method Merge2Nodes addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Merge2Nodes() ;

/// @brief Method ReplaceChild addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ReplaceChild(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  child, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  newChild) ;

// Ctor Parameters [CppParam { name: "", ty: "__SortedSet_1__Node", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SortedSet_1__Node(__SortedSet_1__Node && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SortedSet_1__Node", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SortedSet_1__Node(__SortedSet_1__Node const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SortedSet_1__Node()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Node
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9536))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9536), inst: 2 })
// CS Name: ::SortedSet`1::Node<T>*
class CORDL_TYPE __SortedSet_1__Node<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field <Item>k__BackingField offset 0x10
 __declspec(property(get=__get__Item_k__BackingField, put=__set__Item_k__BackingField)) T  _Item_k__BackingField;

/// @brief Field <Left>k__BackingField offset 0x18
 __declspec(property(get=__get__Left_k__BackingField, put=__set__Left_k__BackingField)) ::System::Collections::Generic::__SortedSet_1__Node<T>*  _Left_k__BackingField;

/// @brief Field <Right>k__BackingField offset 0x20
 __declspec(property(get=__get__Right_k__BackingField, put=__set__Right_k__BackingField)) ::System::Collections::Generic::__SortedSet_1__Node<T>*  _Right_k__BackingField;

/// @brief Field <Color>k__BackingField offset 0x28
 __declspec(property(get=__get__Color_k__BackingField, put=__set__Color_k__BackingField)) ::System::Collections::Generic::NodeColor  _Color_k__BackingField;

 __declspec(property(get=get_Item, put=set_Item)) T  Item;

 __declspec(property(get=get_Left, put=set_Left)) ::System::Collections::Generic::__SortedSet_1__Node<T>*  Left;

 __declspec(property(get=get_Right, put=set_Right)) ::System::Collections::Generic::__SortedSet_1__Node<T>*  Right;

 __declspec(property(get=get_Color, put=set_Color)) ::System::Collections::Generic::NodeColor  Color;

 __declspec(property(get=get_IsBlack)) bool  IsBlack;

 __declspec(property(get=get_IsRed)) bool  IsRed;

 __declspec(property(get=get_Is2Node)) bool  Is2Node;

 __declspec(property(get=get_Is4Node)) bool  Is4Node;

constexpr void __set__Item_k__BackingField(T  value) ;

constexpr T& __get__Item_k__BackingField() ;

constexpr T const& __get__Item_k__BackingField() const;

constexpr void __set__Left_k__BackingField(::System::Collections::Generic::__SortedSet_1__Node<T>*  value) ;

constexpr ::System::Collections::Generic::__SortedSet_1__Node<T>* __get__Left_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__SortedSet_1__Node<T>*> __get__Left_k__BackingField() const;

constexpr void __set__Right_k__BackingField(::System::Collections::Generic::__SortedSet_1__Node<T>*  value) ;

constexpr ::System::Collections::Generic::__SortedSet_1__Node<T>* __get__Right_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__SortedSet_1__Node<T>*> __get__Right_k__BackingField() const;

constexpr void __set__Color_k__BackingField(::System::Collections::Generic::NodeColor  value) ;

constexpr ::System::Collections::Generic::NodeColor& __get__Color_k__BackingField() ;

constexpr ::System::Collections::Generic::NodeColor const& __get__Color_k__BackingField() const;

static inline ::System::Collections::Generic::__SortedSet_1__Node<T>* New_ctor(T  item, ::System::Collections::Generic::NodeColor  color) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T  item, ::System::Collections::Generic::NodeColor  color) ;

/// @brief Method IsNonNullRed addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool IsNonNullRed(::System::Collections::Generic::__SortedSet_1__Node<T>*  node) ;

/// @brief Method IsNullOrBlack addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool IsNullOrBlack(::System::Collections::Generic::__SortedSet_1__Node<T>*  node) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_Item() ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(T  value) ;

/// @brief Method get_Left addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__SortedSet_1__Node<T>* get_Left() ;

/// @brief Method set_Left addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Left(::System::Collections::Generic::__SortedSet_1__Node<T>*  value) ;

/// @brief Method get_Right addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__SortedSet_1__Node<T>* get_Right() ;

/// @brief Method set_Right addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Right(::System::Collections::Generic::__SortedSet_1__Node<T>*  value) ;

/// @brief Method get_Color addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::NodeColor get_Color() ;

/// @brief Method set_Color addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Color(::System::Collections::Generic::NodeColor  value) ;

/// @brief Method get_IsBlack addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsBlack() ;

/// @brief Method get_IsRed addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsRed() ;

/// @brief Method get_Is2Node addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_Is2Node() ;

/// @brief Method get_Is4Node addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_Is4Node() ;

/// @brief Method ColorBlack addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ColorBlack() ;

/// @brief Method ColorRed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ColorRed() ;

/// @brief Method GetRotation addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::TreeRotation GetRotation(::System::Collections::Generic::__SortedSet_1__Node<T>*  current, ::System::Collections::Generic::__SortedSet_1__Node<T>*  sibling) ;

/// @brief Method GetSibling addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__SortedSet_1__Node<T>* GetSibling(::System::Collections::Generic::__SortedSet_1__Node<T>*  node) ;

/// @brief Method Split4Node addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Split4Node() ;

/// @brief Method Rotate addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__SortedSet_1__Node<T>* Rotate(::System::Collections::Generic::TreeRotation  rotation) ;

/// @brief Method RotateLeft addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__SortedSet_1__Node<T>* RotateLeft() ;

/// @brief Method RotateLeftRight addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__SortedSet_1__Node<T>* RotateLeftRight() ;

/// @brief Method RotateRight addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__SortedSet_1__Node<T>* RotateRight() ;

/// @brief Method RotateRightLeft addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__SortedSet_1__Node<T>* RotateRightLeft() ;

/// @brief Method Merge2Nodes addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Merge2Nodes() ;

/// @brief Method ReplaceChild addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ReplaceChild(::System::Collections::Generic::__SortedSet_1__Node<T>*  child, ::System::Collections::Generic::__SortedSet_1__Node<T>*  newChild) ;

// Ctor Parameters [CppParam { name: "", ty: "__SortedSet_1__Node", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SortedSet_1__Node(__SortedSet_1__Node && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SortedSet_1__Node", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SortedSet_1__Node(__SortedSet_1__Node const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SortedSet_1__Node()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9537))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9537), inst: 753 })
// CS Name: ::SortedSet`1::Enumerator<T>
struct CORDL_TYPE __SortedSet_1__Enumerator<uint32_t> : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field _tree offset 0x0
 __declspec(property(get=__get__tree, put=__set__tree)) ::System::Collections::Generic::SortedSet_1<uint32_t>*  _tree;

/// @brief Field _version offset 0x8
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _stack offset 0x10
 __declspec(property(get=__get__stack, put=__set__stack)) ::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>*  _stack;

/// @brief Field _current offset 0x18
 __declspec(property(get=__get__current, put=__set__current)) ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  _current;

/// @brief Field _reverse offset 0x20
 __declspec(property(get=__get__reverse, put=__set__reverse)) bool  _reverse;

 __declspec(property(get=get_Current)) uint32_t  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<uint32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<uint32_t>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() ;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() ;

static inline void setStaticF_s_dummyNode(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  value) ;

static inline ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* getStaticF_s_dummyNode() ;

constexpr void __set__tree(::System::Collections::Generic::SortedSet_1<uint32_t>*  value) ;

constexpr ::System::Collections::Generic::SortedSet_1<uint32_t>* __get__tree() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::SortedSet_1<uint32_t>*> __get__tree() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__stack(::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>*  value) ;

constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>* __get__stack() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>*> __get__stack() const;

constexpr void __set__current(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  value) ;

constexpr ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* __get__current() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*> __get__current() const;

constexpr void __set__reverse(bool  value) ;

constexpr bool& __get__reverse() ;

constexpr bool const& __get__reverse() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::SortedSet_1<uint32_t>*  set) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::SortedSet_1<uint32_t>*  set, bool  reverse) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender) ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Initialize() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline uint32_t get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_tree", ty: "::System::Collections::Generic::SortedSet_1<uint32_t>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_stack", ty: "::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>*", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*", modifiers: "", def_value: None }, CppParam { name: "_reverse", ty: "bool", modifiers: "", def_value: None }]
constexpr __SortedSet_1__Enumerator(::System::Collections::Generic::SortedSet_1<uint32_t>*  _tree, int32_t  _version, ::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>*  _stack, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  _current, bool  _reverse) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __SortedSet_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __SortedSet_1__Enumerator()  = default;


// Fields

// Static field s_dummyNode


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9537))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9537), inst: 2 })
// CS Name: ::SortedSet`1::Enumerator<T>
struct CORDL_TYPE __SortedSet_1__Enumerator<T> : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field _tree offset 0x0
 __declspec(property(get=__get__tree, put=__set__tree)) ::System::Collections::Generic::SortedSet_1<T>*  _tree;

/// @brief Field _version offset 0x8
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _stack offset 0x10
 __declspec(property(get=__get__stack, put=__set__stack)) ::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<T>*>*  _stack;

/// @brief Field _current offset 0x18
 __declspec(property(get=__get__current, put=__set__current)) ::System::Collections::Generic::__SortedSet_1__Node<T>*  _current;

/// @brief Field _reverse offset 0x20
 __declspec(property(get=__get__reverse, put=__set__reverse)) bool  _reverse;

 __declspec(property(get=get_Current)) T  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() ;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() ;

static inline void setStaticF_s_dummyNode(::System::Collections::Generic::__SortedSet_1__Node<T>*  value) ;

static inline ::System::Collections::Generic::__SortedSet_1__Node<T>* getStaticF_s_dummyNode() ;

constexpr void __set__tree(::System::Collections::Generic::SortedSet_1<T>*  value) ;

constexpr ::System::Collections::Generic::SortedSet_1<T>* __get__tree() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::SortedSet_1<T>*> __get__tree() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__stack(::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<T>*>*  value) ;

constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<T>*>* __get__stack() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<T>*>*> __get__stack() const;

constexpr void __set__current(::System::Collections::Generic::__SortedSet_1__Node<T>*  value) ;

constexpr ::System::Collections::Generic::__SortedSet_1__Node<T>* __get__current() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__SortedSet_1__Node<T>*> __get__current() const;

constexpr void __set__reverse(bool  value) ;

constexpr bool& __get__reverse() ;

constexpr bool const& __get__reverse() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::SortedSet_1<T>*  set) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::SortedSet_1<T>*  set, bool  reverse) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender) ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Initialize() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline T get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_tree", ty: "::System::Collections::Generic::SortedSet_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_stack", ty: "::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<T>*>*", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "::System::Collections::Generic::__SortedSet_1__Node<T>*", modifiers: "", def_value: None }, CppParam { name: "_reverse", ty: "bool", modifiers: "", def_value: None }]
constexpr __SortedSet_1__Enumerator(::System::Collections::Generic::SortedSet_1<T>*  _tree, int32_t  _version, ::System::Collections::Generic::Stack_1<::System::Collections::Generic::__SortedSet_1__Node<T>*>*  _stack, ::System::Collections::Generic::__SortedSet_1__Node<T>*  _current, bool  _reverse) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __SortedSet_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __SortedSet_1__Enumerator()  = default;


// Fields

// Static field s_dummyNode


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::<>c__DisplayClass52_0
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9539))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9539), inst: 753 })
// CS Name: ::SortedSet`1::<>c__DisplayClass52_0<T>*
class CORDL_TYPE __SortedSet_1____c__DisplayClass52_0<uint32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field index offset 0x10
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

/// @brief Field count offset 0x14
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field array offset 0x18
 __declspec(property(get=__get_array, put=__set_array)) ::ArrayW<uint32_t,::Array<uint32_t>*>  array;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_array(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get_array() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get_array() const;

static inline ::System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<uint32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <CopyTo>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _CopyTo_b__0(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  node) ;

// Ctor Parameters [CppParam { name: "", ty: "__SortedSet_1____c__DisplayClass52_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SortedSet_1____c__DisplayClass52_0(__SortedSet_1____c__DisplayClass52_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SortedSet_1____c__DisplayClass52_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SortedSet_1____c__DisplayClass52_0(__SortedSet_1____c__DisplayClass52_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SortedSet_1____c__DisplayClass52_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::<>c__DisplayClass52_0
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9539))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9539), inst: 2 })
// CS Name: ::SortedSet`1::<>c__DisplayClass52_0<T>*
class CORDL_TYPE __SortedSet_1____c__DisplayClass52_0<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field index offset 0x10
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

/// @brief Field count offset 0x14
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field array offset 0x18
 __declspec(property(get=__get_array, put=__set_array)) ::ArrayW<T,::Array<T>*>  array;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_array(::ArrayW<T,::Array<T>*>  value) ;

constexpr ::ArrayW<T,::Array<T>*>& __get_array() ;

constexpr ::ArrayW<T,::Array<T>*> const& __get_array() const;

static inline ::System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <CopyTo>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _CopyTo_b__0(::System::Collections::Generic::__SortedSet_1__Node<T>*  node) ;

// Ctor Parameters [CppParam { name: "", ty: "__SortedSet_1____c__DisplayClass52_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SortedSet_1____c__DisplayClass52_0(__SortedSet_1____c__DisplayClass52_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SortedSet_1____c__DisplayClass52_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SortedSet_1____c__DisplayClass52_0(__SortedSet_1____c__DisplayClass52_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SortedSet_1____c__DisplayClass52_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::<>c__DisplayClass53_0
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9540))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9540), inst: 753 })
// CS Name: ::SortedSet`1::<>c__DisplayClass53_0<T>*
class CORDL_TYPE __SortedSet_1____c__DisplayClass53_0<uint32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field index offset 0x10
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

/// @brief Field objects offset 0x18
 __declspec(property(get=__get_objects, put=__set_objects)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  objects;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

constexpr void __set_objects(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& __get_objects() ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& __get_objects() const;

static inline ::System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<uint32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <System.Collections.ICollection.CopyTo>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _System_Collections_ICollection_CopyTo_b__0(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  node) ;

// Ctor Parameters [CppParam { name: "", ty: "__SortedSet_1____c__DisplayClass53_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SortedSet_1____c__DisplayClass53_0(__SortedSet_1____c__DisplayClass53_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SortedSet_1____c__DisplayClass53_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SortedSet_1____c__DisplayClass53_0(__SortedSet_1____c__DisplayClass53_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SortedSet_1____c__DisplayClass53_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::<>c__DisplayClass53_0
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9540)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9540), inst: 2 })
// CS Name: ::SortedSet`1::<>c__DisplayClass53_0<T>*
class CORDL_TYPE __SortedSet_1____c__DisplayClass53_0<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field index offset 0x10
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

/// @brief Field objects offset 0x18
 __declspec(property(get=__get_objects, put=__set_objects)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  objects;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

constexpr void __set_objects(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& __get_objects() ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& __get_objects() const;

static inline ::System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <System.Collections.ICollection.CopyTo>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool _System_Collections_ICollection_CopyTo_b__0(::System::Collections::Generic::__SortedSet_1__Node<T>*  node) ;

// Ctor Parameters [CppParam { name: "", ty: "__SortedSet_1____c__DisplayClass53_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SortedSet_1____c__DisplayClass53_0(__SortedSet_1____c__DisplayClass53_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SortedSet_1____c__DisplayClass53_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SortedSet_1____c__DisplayClass53_0(__SortedSet_1____c__DisplayClass53_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SortedSet_1____c__DisplayClass53_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::SortedSet`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9541)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9541), inst: 753 })
// CS Name: ::System.Collections.Generic::SortedSet`1<T>*
class CORDL_TYPE SortedSet_1<uint32_t> : public ::System::Object {
public:
// Declarations
using __c__DisplayClass53_0 = ::System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<uint32_t>;

using __c__DisplayClass52_0 = ::System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<uint32_t>;

using ElementCount = ::System::Collections::Generic::__SortedSet_1__ElementCount<uint32_t>;

using Enumerator = ::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t>;

using Node = ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field root offset 0x10
 __declspec(property(get=__get_root, put=__set_root)) ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  root;

/// @brief Field comparer offset 0x18
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IComparer_1<uint32_t>*  comparer;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field version offset 0x24
 __declspec(property(get=__get_version, put=__set_version)) int32_t  version;

/// @brief Field _syncRoot offset 0x28
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

/// @brief Field siInfo offset 0x30
 __declspec(property(get=__get_siInfo, put=__set_siInfo)) ::System::Runtime::Serialization::SerializationInfo*  siInfo;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Comparer)) ::System::Collections::Generic::IComparer_1<uint32_t>*  Comparer;

 __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool  System_Collections_Generic_ICollection_T__IsReadOnly;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<uint32_t>"
constexpr operator  ::System::Collections::Generic::ICollection_1<uint32_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<uint32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<uint32_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<uint32_t>*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

constexpr void __set_root(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  value) ;

constexpr ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* __get_root() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*> __get_root() const;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<uint32_t>*  value) ;

constexpr ::System::Collections::Generic::IComparer_1<uint32_t>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<uint32_t>*> __get_comparer() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_version(int32_t  value) ;

constexpr int32_t& __get_version() ;

constexpr int32_t const& __get_version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

constexpr void __set_siInfo(::System::Runtime::Serialization::SerializationInfo*  value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo* __get_siInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> __get_siInfo() const;

static inline ::System::Collections::Generic::SortedSet_1<uint32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::SortedSet_1<uint32_t>* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method InOrderTreeWalk addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool InOrderTreeWalk(::System::Collections::Generic::TreeWalkPredicate_1<uint32_t>*  action) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_Comparer addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::IComparer_1<uint32_t>* get_Comparer() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method VersionCheck addr 0x0 size 0xffffffffffffffff virtual true final false
inline void VersionCheck() ;

/// @brief Method IsWithinRange addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool IsWithinRange(uint32_t  item) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Add(uint32_t  item) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_Generic_ICollection_T__Add(uint32_t  item) ;

/// @brief Method AddIfNotPresent addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool AddIfNotPresent(uint32_t  item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Remove(uint32_t  item) ;

/// @brief Method DoRemove addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool DoRemove(uint32_t  item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Contains(uint32_t  item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CopyTo(::ArrayW<uint32_t,::Array<uint32_t>*>  array, int32_t  index) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<uint32_t,::Array<uint32_t>*>  array, int32_t  index, int32_t  count) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__SortedSet_1__Enumerator<uint32_t> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<uint32_t>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method InsertionBalance addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InsertionBalance(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  current, ByRef<::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*>  parent, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  grandParent, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  greatGrandParent) ;

/// @brief Method ReplaceChildOrRoot addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ReplaceChildOrRoot(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  parent, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  child, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  newChild) ;

/// @brief Method ReplaceNode addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ReplaceNode(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  match, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  parentOfMatch, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  successor, ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  parentOfSuccessor) ;

/// @brief Method FindNode addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Collections::Generic::__SortedSet_1__Node<uint32_t>* FindNode(uint32_t  item) ;

/// @brief Method InternalIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t InternalIndexOf(uint32_t  item) ;

/// @brief Method HasEqualComparer addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool HasEqualComparer(::System::Collections::Generic::SortedSet_1<uint32_t>*  other) ;

/// @brief Method SetEquals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool SetEquals(::System::Collections::Generic::IEnumerable_1<uint32_t>*  other) ;

/// @brief Method CheckUniqueAndUnfoundElements addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__SortedSet_1__ElementCount<uint32_t> CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<uint32_t>*  other, bool  returnIfUnfound) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnDeserialization(::System::Object*  sender) ;

/// @brief Method Log2 addr 0x0 size 0xffffffffffffffff virtual false final false
static inline int32_t Log2(int32_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "SortedSet_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SortedSet_1(SortedSet_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SortedSet_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SortedSet_1(SortedSet_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SortedSet_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::SortedSet`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9541)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9541), inst: 2 })
// CS Name: ::System.Collections.Generic::SortedSet`1<T>*
class CORDL_TYPE SortedSet_1<T> : public ::System::Object {
public:
// Declarations
using __c__DisplayClass53_0 = ::System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0<T>;

using __c__DisplayClass52_0 = ::System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0<T>;

using ElementCount = ::System::Collections::Generic::__SortedSet_1__ElementCount<T>;

using Enumerator = ::System::Collections::Generic::__SortedSet_1__Enumerator<T>;

using Node = ::System::Collections::Generic::__SortedSet_1__Node<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field root offset 0x10
 __declspec(property(get=__get_root, put=__set_root)) ::System::Collections::Generic::__SortedSet_1__Node<T>*  root;

/// @brief Field comparer offset 0x18
 __declspec(property(get=__get_comparer, put=__set_comparer)) ::System::Collections::Generic::IComparer_1<T>*  comparer;

/// @brief Field count offset 0x20
 __declspec(property(get=__get_count, put=__set_count)) int32_t  count;

/// @brief Field version offset 0x24
 __declspec(property(get=__get_version, put=__set_version)) int32_t  version;

/// @brief Field _syncRoot offset 0x28
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

/// @brief Field siInfo offset 0x30
 __declspec(property(get=__get_siInfo, put=__set_siInfo)) ::System::Runtime::Serialization::SerializationInfo*  siInfo;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Comparer)) ::System::Collections::Generic::IComparer_1<T>*  Comparer;

 __declspec(property(get=System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool  System_Collections_Generic_ICollection_T__IsReadOnly;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
constexpr operator  ::System::Collections::Generic::ICollection_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

constexpr void __set_root(::System::Collections::Generic::__SortedSet_1__Node<T>*  value) ;

constexpr ::System::Collections::Generic::__SortedSet_1__Node<T>* __get_root() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::__SortedSet_1__Node<T>*> __get_root() const;

constexpr void __set_comparer(::System::Collections::Generic::IComparer_1<T>*  value) ;

constexpr ::System::Collections::Generic::IComparer_1<T>* __get_comparer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<T>*> __get_comparer() const;

constexpr void __set_count(int32_t  value) ;

constexpr int32_t& __get_count() ;

constexpr int32_t const& __get_count() const;

constexpr void __set_version(int32_t  value) ;

constexpr int32_t& __get_version() ;

constexpr int32_t const& __get_version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

constexpr void __set_siInfo(::System::Runtime::Serialization::SerializationInfo*  value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo* __get_siInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> __get_siInfo() const;

static inline ::System::Collections::Generic::SortedSet_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::SortedSet_1<T>* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method InOrderTreeWalk addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool InOrderTreeWalk(::System::Collections::Generic::TreeWalkPredicate_1<T>*  action) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_Comparer addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::IComparer_1<T>* get_Comparer() ;

/// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method VersionCheck addr 0x0 size 0xffffffffffffffff virtual true final false
inline void VersionCheck() ;

/// @brief Method IsWithinRange addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool IsWithinRange(T  item) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Add(T  item) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_Generic_ICollection_T__Add(T  item) ;

/// @brief Method AddIfNotPresent addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool AddIfNotPresent(T  item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Remove(T  item) ;

/// @brief Method DoRemove addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool DoRemove(T  item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Contains(T  item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void CopyTo(::ArrayW<T,::Array<T>*>  array, int32_t  index) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyTo(::ArrayW<T,::Array<T>*>  array, int32_t  index, int32_t  count) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__SortedSet_1__Enumerator<T> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method InsertionBalance addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InsertionBalance(::System::Collections::Generic::__SortedSet_1__Node<T>*  current, ByRef<::System::Collections::Generic::__SortedSet_1__Node<T>*>  parent, ::System::Collections::Generic::__SortedSet_1__Node<T>*  grandParent, ::System::Collections::Generic::__SortedSet_1__Node<T>*  greatGrandParent) ;

/// @brief Method ReplaceChildOrRoot addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ReplaceChildOrRoot(::System::Collections::Generic::__SortedSet_1__Node<T>*  parent, ::System::Collections::Generic::__SortedSet_1__Node<T>*  child, ::System::Collections::Generic::__SortedSet_1__Node<T>*  newChild) ;

/// @brief Method ReplaceNode addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ReplaceNode(::System::Collections::Generic::__SortedSet_1__Node<T>*  match, ::System::Collections::Generic::__SortedSet_1__Node<T>*  parentOfMatch, ::System::Collections::Generic::__SortedSet_1__Node<T>*  successor, ::System::Collections::Generic::__SortedSet_1__Node<T>*  parentOfSuccessor) ;

/// @brief Method FindNode addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Collections::Generic::__SortedSet_1__Node<T>* FindNode(T  item) ;

/// @brief Method InternalIndexOf addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t InternalIndexOf(T  item) ;

/// @brief Method HasEqualComparer addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool HasEqualComparer(::System::Collections::Generic::SortedSet_1<T>*  other) ;

/// @brief Method SetEquals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool SetEquals(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method CheckUniqueAndUnfoundElements addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__SortedSet_1__ElementCount<T> CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<T>*  other, bool  returnIfUnfound) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender) ;

/// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnDeserialization(::System::Object*  sender) ;

/// @brief Method Log2 addr 0x0 size 0xffffffffffffffff virtual false final false
static inline int32_t Log2(int32_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "SortedSet_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SortedSet_1(SortedSet_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SortedSet_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SortedSet_1(SortedSet_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SortedSet_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::SortedSet_1, "System.Collections.Generic", "SortedSet`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::__SortedSet_1__Node, "System.Collections.Generic", "SortedSet`1/Node");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::__SortedSet_1____c__DisplayClass52_0, "System.Collections.Generic", "SortedSet`1/<>c__DisplayClass52_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::__SortedSet_1____c__DisplayClass53_0, "System.Collections.Generic", "SortedSet`1/<>c__DisplayClass53_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::__SortedSet_1__Enumerator, "System.Collections.Generic", "SortedSet`1/Enumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::__SortedSet_1__ElementCount, "System.Collections.Generic", "SortedSet`1/ElementCount");
