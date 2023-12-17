#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_TextProcessingStack_1)
namespace TMPro {
struct HighlightState;
}
namespace TMPro {
struct MaterialReference;
}
namespace TMPro {
struct WordWrapState;
}
namespace UnityEngine {
struct Color32;
}
// Forward declare root types
namespace TMPro {
template<typename T>
struct TMP_TextProcessingStack_1;
}
namespace TMPro {
template<>
struct TMP_TextProcessingStack_1<::TMPro::HighlightState>;
}
namespace TMPro {
template<>
struct TMP_TextProcessingStack_1<::TMPro::MaterialReference>;
}
namespace TMPro {
template<>
struct TMP_TextProcessingStack_1<::TMPro::WordWrapState>;
}
namespace TMPro {
template<>
struct TMP_TextProcessingStack_1<::UnityEngine::Color32>;
}
namespace TMPro {
template<::il2cpp_utils::il2cpp_reference_type T>
struct TMP_TextProcessingStack_1<T>;
}
namespace TMPro {
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
struct TMP_TextProcessingStack_1<T>;
}
namespace TMPro {
template<>
struct TMP_TextProcessingStack_1<float_t>;
}
namespace TMPro {
template<>
struct TMP_TextProcessingStack_1<int32_t>;
}
// Write type traits
MARK_GEN_VAL_T(::TMPro::TMP_TextProcessingStack_1);
// Type: TMPro::TMP_TextProcessingStack`1
// Type: TMPro::TMP_TextProcessingStack`1
namespace TMPro {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12453))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12453), inst: 5055 })
// CS Name: ::TMPro::TMP_TextProcessingStack`1<T>
struct CORDL_TYPE TMP_TextProcessingStack_1<::TMPro::WordWrapState> : public ::bs_hook::ValueTypeWrapper<0x398> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x398};

/// @brief Field k_DefaultCapacity offset 0x0
static constexpr int32_t  k_DefaultCapacity{static_cast<int32_t>(0x4)};

/// @brief Field itemStack offset 0x0
 __declspec(property(get=__get_itemStack, put=__set_itemStack)) ::ArrayW<::TMPro::WordWrapState,::Array<::TMPro::WordWrapState>*>  itemStack;

/// @brief Field index offset 0x8
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

/// @brief Field m_DefaultItem offset 0x10
 __declspec(property(get=__get_m_DefaultItem, put=__set_m_DefaultItem)) ::TMPro::WordWrapState  m_DefaultItem;

/// @brief Field m_Capacity offset 0x388
 __declspec(property(get=__get_m_Capacity, put=__set_m_Capacity)) int32_t  m_Capacity;

/// @brief Field m_RolloverSize offset 0x38c
 __declspec(property(get=__get_m_RolloverSize, put=__set_m_RolloverSize)) int32_t  m_RolloverSize;

/// @brief Field m_Count offset 0x390
 __declspec(property(get=__get_m_Count, put=__set_m_Count)) int32_t  m_Count;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_current)) ::TMPro::WordWrapState  current;

 __declspec(property(get=get_rolloverSize, put=set_rolloverSize)) int32_t  rolloverSize;

constexpr void __set_itemStack(::ArrayW<::TMPro::WordWrapState,::Array<::TMPro::WordWrapState>*>  value) ;

constexpr ::ArrayW<::TMPro::WordWrapState,::Array<::TMPro::WordWrapState>*>& __get_itemStack() ;

constexpr ::ArrayW<::TMPro::WordWrapState,::Array<::TMPro::WordWrapState>*> const& __get_itemStack() const;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

constexpr void __set_m_DefaultItem(::TMPro::WordWrapState  value) ;

constexpr ::TMPro::WordWrapState& __get_m_DefaultItem() ;

constexpr ::TMPro::WordWrapState const& __get_m_DefaultItem() const;

constexpr void __set_m_Capacity(int32_t  value) ;

constexpr int32_t& __get_m_Capacity() ;

constexpr int32_t const& __get_m_Capacity() const;

constexpr void __set_m_RolloverSize(int32_t  value) ;

constexpr int32_t& __get_m_RolloverSize() ;

constexpr int32_t const& __get_m_RolloverSize() const;

constexpr void __set_m_Count(int32_t  value) ;

constexpr int32_t& __get_m_Count() ;

constexpr int32_t const& __get_m_Count() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::TMPro::WordWrapState,::Array<::TMPro::WordWrapState>*>  stack) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity, int32_t  rolloverSize) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Count() ;

/// @brief Method get_current addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::TMPro::WordWrapState get_current() ;

/// @brief Method get_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_rolloverSize() ;

/// @brief Method set_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_rolloverSize(int32_t  value) ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void SetDefault(::ArrayW<::TMPro::TMP_TextProcessingStack_1<::TMPro::WordWrapState>,::Array<::TMPro::TMP_TextProcessingStack_1<::TMPro::WordWrapState>>*>  stack, ::TMPro::WordWrapState  item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetDefault(::TMPro::WordWrapState  item) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::TMPro::WordWrapState  item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::TMPro::WordWrapState Remove() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Push(::TMPro::WordWrapState  item) ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::TMPro::WordWrapState Pop() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::TMPro::WordWrapState Peek() ;

/// @brief Method CurrentItem addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::TMPro::WordWrapState CurrentItem() ;

/// @brief Method PreviousItem addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::TMPro::WordWrapState PreviousItem() ;

// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<::TMPro::WordWrapState,::Array<::TMPro::WordWrapState>*>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultItem", ty: "::TMPro::WordWrapState", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMP_TextProcessingStack_1(::ArrayW<::TMPro::WordWrapState,::Array<::TMPro::WordWrapState>*>  itemStack, int32_t  index, ::TMPro::WordWrapState  m_DefaultItem, int32_t  m_Capacity, int32_t  m_RolloverSize, int32_t  m_Count) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TMP_TextProcessingStack_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x398>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TMP_TextProcessingStack_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::TMP_TextProcessingStack`1
namespace TMPro {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12453))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12453), inst: 5053 })
// CS Name: ::TMPro::TMP_TextProcessingStack`1<T>
struct CORDL_TYPE TMP_TextProcessingStack_1<::TMPro::MaterialReference> : public ::bs_hook::ValueTypeWrapper<0x58> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field k_DefaultCapacity offset 0x0
static constexpr int32_t  k_DefaultCapacity{static_cast<int32_t>(0x4)};

/// @brief Field itemStack offset 0x0
 __declspec(property(get=__get_itemStack, put=__set_itemStack)) ::ArrayW<::TMPro::MaterialReference,::Array<::TMPro::MaterialReference>*>  itemStack;

/// @brief Field index offset 0x8
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

/// @brief Field m_DefaultItem offset 0x10
 __declspec(property(get=__get_m_DefaultItem, put=__set_m_DefaultItem)) ::TMPro::MaterialReference  m_DefaultItem;

/// @brief Field m_Capacity offset 0x48
 __declspec(property(get=__get_m_Capacity, put=__set_m_Capacity)) int32_t  m_Capacity;

/// @brief Field m_RolloverSize offset 0x4c
 __declspec(property(get=__get_m_RolloverSize, put=__set_m_RolloverSize)) int32_t  m_RolloverSize;

/// @brief Field m_Count offset 0x50
 __declspec(property(get=__get_m_Count, put=__set_m_Count)) int32_t  m_Count;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_current)) ::TMPro::MaterialReference  current;

 __declspec(property(get=get_rolloverSize, put=set_rolloverSize)) int32_t  rolloverSize;

constexpr void __set_itemStack(::ArrayW<::TMPro::MaterialReference,::Array<::TMPro::MaterialReference>*>  value) ;

constexpr ::ArrayW<::TMPro::MaterialReference,::Array<::TMPro::MaterialReference>*>& __get_itemStack() ;

constexpr ::ArrayW<::TMPro::MaterialReference,::Array<::TMPro::MaterialReference>*> const& __get_itemStack() const;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

constexpr void __set_m_DefaultItem(::TMPro::MaterialReference  value) ;

constexpr ::TMPro::MaterialReference& __get_m_DefaultItem() ;

constexpr ::TMPro::MaterialReference const& __get_m_DefaultItem() const;

constexpr void __set_m_Capacity(int32_t  value) ;

constexpr int32_t& __get_m_Capacity() ;

constexpr int32_t const& __get_m_Capacity() const;

constexpr void __set_m_RolloverSize(int32_t  value) ;

constexpr int32_t& __get_m_RolloverSize() ;

constexpr int32_t const& __get_m_RolloverSize() const;

constexpr void __set_m_Count(int32_t  value) ;

constexpr int32_t& __get_m_Count() ;

constexpr int32_t const& __get_m_Count() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::TMPro::MaterialReference,::Array<::TMPro::MaterialReference>*>  stack) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity, int32_t  rolloverSize) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Count() ;

/// @brief Method get_current addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::TMPro::MaterialReference get_current() ;

/// @brief Method get_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_rolloverSize() ;

/// @brief Method set_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_rolloverSize(int32_t  value) ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void SetDefault(::ArrayW<::TMPro::TMP_TextProcessingStack_1<::TMPro::MaterialReference>,::Array<::TMPro::TMP_TextProcessingStack_1<::TMPro::MaterialReference>>*>  stack, ::TMPro::MaterialReference  item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetDefault(::TMPro::MaterialReference  item) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::TMPro::MaterialReference  item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::TMPro::MaterialReference Remove() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Push(::TMPro::MaterialReference  item) ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::TMPro::MaterialReference Pop() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::TMPro::MaterialReference Peek() ;

/// @brief Method CurrentItem addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::TMPro::MaterialReference CurrentItem() ;

/// @brief Method PreviousItem addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::TMPro::MaterialReference PreviousItem() ;

// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<::TMPro::MaterialReference,::Array<::TMPro::MaterialReference>*>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultItem", ty: "::TMPro::MaterialReference", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMP_TextProcessingStack_1(::ArrayW<::TMPro::MaterialReference,::Array<::TMPro::MaterialReference>*>  itemStack, int32_t  index, ::TMPro::MaterialReference  m_DefaultItem, int32_t  m_Capacity, int32_t  m_RolloverSize, int32_t  m_Count) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TMP_TextProcessingStack_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x58>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TMP_TextProcessingStack_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::TMP_TextProcessingStack`1
namespace TMPro {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12453))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12453), inst: 5051 })
// CS Name: ::TMPro::TMP_TextProcessingStack`1<T>
struct CORDL_TYPE TMP_TextProcessingStack_1<::TMPro::HighlightState> : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field k_DefaultCapacity offset 0x0
static constexpr int32_t  k_DefaultCapacity{static_cast<int32_t>(0x4)};

/// @brief Field itemStack offset 0x0
 __declspec(property(get=__get_itemStack, put=__set_itemStack)) ::ArrayW<::TMPro::HighlightState,::Array<::TMPro::HighlightState>*>  itemStack;

/// @brief Field index offset 0x8
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

/// @brief Field m_DefaultItem offset 0xc
 __declspec(property(get=__get_m_DefaultItem, put=__set_m_DefaultItem)) ::TMPro::HighlightState  m_DefaultItem;

/// @brief Field m_Capacity offset 0x20
 __declspec(property(get=__get_m_Capacity, put=__set_m_Capacity)) int32_t  m_Capacity;

/// @brief Field m_RolloverSize offset 0x24
 __declspec(property(get=__get_m_RolloverSize, put=__set_m_RolloverSize)) int32_t  m_RolloverSize;

/// @brief Field m_Count offset 0x28
 __declspec(property(get=__get_m_Count, put=__set_m_Count)) int32_t  m_Count;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_current)) ::TMPro::HighlightState  current;

 __declspec(property(get=get_rolloverSize, put=set_rolloverSize)) int32_t  rolloverSize;

constexpr void __set_itemStack(::ArrayW<::TMPro::HighlightState,::Array<::TMPro::HighlightState>*>  value) ;

constexpr ::ArrayW<::TMPro::HighlightState,::Array<::TMPro::HighlightState>*>& __get_itemStack() ;

constexpr ::ArrayW<::TMPro::HighlightState,::Array<::TMPro::HighlightState>*> const& __get_itemStack() const;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

constexpr void __set_m_DefaultItem(::TMPro::HighlightState  value) ;

constexpr ::TMPro::HighlightState& __get_m_DefaultItem() ;

constexpr ::TMPro::HighlightState const& __get_m_DefaultItem() const;

constexpr void __set_m_Capacity(int32_t  value) ;

constexpr int32_t& __get_m_Capacity() ;

constexpr int32_t const& __get_m_Capacity() const;

constexpr void __set_m_RolloverSize(int32_t  value) ;

constexpr int32_t& __get_m_RolloverSize() ;

constexpr int32_t const& __get_m_RolloverSize() const;

constexpr void __set_m_Count(int32_t  value) ;

constexpr int32_t& __get_m_Count() ;

constexpr int32_t const& __get_m_Count() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::TMPro::HighlightState,::Array<::TMPro::HighlightState>*>  stack) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity, int32_t  rolloverSize) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Count() ;

/// @brief Method get_current addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::TMPro::HighlightState get_current() ;

/// @brief Method get_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_rolloverSize() ;

/// @brief Method set_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_rolloverSize(int32_t  value) ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void SetDefault(::ArrayW<::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState>,::Array<::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState>>*>  stack, ::TMPro::HighlightState  item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetDefault(::TMPro::HighlightState  item) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::TMPro::HighlightState  item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::TMPro::HighlightState Remove() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Push(::TMPro::HighlightState  item) ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::TMPro::HighlightState Pop() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::TMPro::HighlightState Peek() ;

/// @brief Method CurrentItem addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::TMPro::HighlightState CurrentItem() ;

/// @brief Method PreviousItem addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::TMPro::HighlightState PreviousItem() ;

// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<::TMPro::HighlightState,::Array<::TMPro::HighlightState>*>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultItem", ty: "::TMPro::HighlightState", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMP_TextProcessingStack_1(::ArrayW<::TMPro::HighlightState,::Array<::TMPro::HighlightState>*>  itemStack, int32_t  index, ::TMPro::HighlightState  m_DefaultItem, int32_t  m_Capacity, int32_t  m_RolloverSize, int32_t  m_Count) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TMP_TextProcessingStack_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TMP_TextProcessingStack_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::TMP_TextProcessingStack`1
namespace TMPro {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12453))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12453), inst: 974 })
// CS Name: ::TMPro::TMP_TextProcessingStack`1<T>
struct CORDL_TYPE TMP_TextProcessingStack_1<T> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field k_DefaultCapacity offset 0x0
static constexpr int32_t  k_DefaultCapacity{static_cast<int32_t>(0x4)};

/// @brief Field itemStack offset 0x0
 __declspec(property(get=__get_itemStack, put=__set_itemStack)) ::ArrayW<T,::Array<T>*>  itemStack;

/// @brief Field index offset 0x8
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

/// @brief Field m_DefaultItem offset 0xc
 __declspec(property(get=__get_m_DefaultItem, put=__set_m_DefaultItem)) T  m_DefaultItem;

/// @brief Field m_Capacity offset 0x10
 __declspec(property(get=__get_m_Capacity, put=__set_m_Capacity)) int32_t  m_Capacity;

/// @brief Field m_RolloverSize offset 0x14
 __declspec(property(get=__get_m_RolloverSize, put=__set_m_RolloverSize)) int32_t  m_RolloverSize;

/// @brief Field m_Count offset 0x18
 __declspec(property(get=__get_m_Count, put=__set_m_Count)) int32_t  m_Count;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_current)) T  current;

 __declspec(property(get=get_rolloverSize, put=set_rolloverSize)) int32_t  rolloverSize;

constexpr void __set_itemStack(::ArrayW<T,::Array<T>*>  value) ;

constexpr ::ArrayW<T,::Array<T>*>& __get_itemStack() ;

constexpr ::ArrayW<T,::Array<T>*> const& __get_itemStack() const;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

constexpr void __set_m_DefaultItem(T  value) ;

constexpr T& __get_m_DefaultItem() ;

constexpr T const& __get_m_DefaultItem() const;

constexpr void __set_m_Capacity(int32_t  value) ;

constexpr int32_t& __get_m_Capacity() ;

constexpr int32_t const& __get_m_Capacity() const;

constexpr void __set_m_RolloverSize(int32_t  value) ;

constexpr int32_t& __get_m_RolloverSize() ;

constexpr int32_t const& __get_m_RolloverSize() const;

constexpr void __set_m_Count(int32_t  value) ;

constexpr int32_t& __get_m_Count() ;

constexpr int32_t const& __get_m_Count() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<T,::Array<T>*>  stack) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity, int32_t  rolloverSize) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Count() ;

/// @brief Method get_current addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_current() ;

/// @brief Method get_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_rolloverSize() ;

/// @brief Method set_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_rolloverSize(int32_t  value) ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void SetDefault(::ArrayW<::TMPro::TMP_TextProcessingStack_1<T>,::Array<::TMPro::TMP_TextProcessingStack_1<T>>*>  stack, T  item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetDefault(T  item) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(T  item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline T Remove() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Push(T  item) ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
inline T Pop() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline T Peek() ;

/// @brief Method CurrentItem addr 0x0 size 0xffffffffffffffff virtual false final false
inline T CurrentItem() ;

/// @brief Method PreviousItem addr 0x0 size 0xffffffffffffffff virtual false final false
inline T PreviousItem() ;

// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultItem", ty: "T", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMP_TextProcessingStack_1(::ArrayW<T,::Array<T>*>  itemStack, int32_t  index, T  m_DefaultItem, int32_t  m_Capacity, int32_t  m_RolloverSize, int32_t  m_Count) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TMP_TextProcessingStack_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TMP_TextProcessingStack_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::TMP_TextProcessingStack`1
namespace TMPro {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12453))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12453), inst: 742 })
// CS Name: ::TMPro::TMP_TextProcessingStack`1<T>
struct CORDL_TYPE TMP_TextProcessingStack_1<::UnityEngine::Color32> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field k_DefaultCapacity offset 0x0
static constexpr int32_t  k_DefaultCapacity{static_cast<int32_t>(0x4)};

/// @brief Field itemStack offset 0x0
 __declspec(property(get=__get_itemStack, put=__set_itemStack)) ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  itemStack;

/// @brief Field index offset 0x8
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

/// @brief Field m_DefaultItem offset 0xc
 __declspec(property(get=__get_m_DefaultItem, put=__set_m_DefaultItem)) ::UnityEngine::Color32  m_DefaultItem;

/// @brief Field m_Capacity offset 0x10
 __declspec(property(get=__get_m_Capacity, put=__set_m_Capacity)) int32_t  m_Capacity;

/// @brief Field m_RolloverSize offset 0x14
 __declspec(property(get=__get_m_RolloverSize, put=__set_m_RolloverSize)) int32_t  m_RolloverSize;

/// @brief Field m_Count offset 0x18
 __declspec(property(get=__get_m_Count, put=__set_m_Count)) int32_t  m_Count;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_current)) ::UnityEngine::Color32  current;

 __declspec(property(get=get_rolloverSize, put=set_rolloverSize)) int32_t  rolloverSize;

constexpr void __set_itemStack(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>& __get_itemStack() ;

constexpr ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*> const& __get_itemStack() const;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

constexpr void __set_m_DefaultItem(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_m_DefaultItem() ;

constexpr ::UnityEngine::Color32 const& __get_m_DefaultItem() const;

constexpr void __set_m_Capacity(int32_t  value) ;

constexpr int32_t& __get_m_Capacity() ;

constexpr int32_t const& __get_m_Capacity() const;

constexpr void __set_m_RolloverSize(int32_t  value) ;

constexpr int32_t& __get_m_RolloverSize() ;

constexpr int32_t const& __get_m_RolloverSize() const;

constexpr void __set_m_Count(int32_t  value) ;

constexpr int32_t& __get_m_Count() ;

constexpr int32_t const& __get_m_Count() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  stack) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity, int32_t  rolloverSize) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Count() ;

/// @brief Method get_current addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Color32 get_current() ;

/// @brief Method get_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_rolloverSize() ;

/// @brief Method set_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_rolloverSize(int32_t  value) ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void SetDefault(::ArrayW<::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>,::Array<::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>>*>  stack, ::UnityEngine::Color32  item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetDefault(::UnityEngine::Color32  item) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::UnityEngine::Color32  item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Color32 Remove() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Push(::UnityEngine::Color32  item) ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Color32 Pop() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Color32 Peek() ;

/// @brief Method CurrentItem addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Color32 CurrentItem() ;

/// @brief Method PreviousItem addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Color32 PreviousItem() ;

// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultItem", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMP_TextProcessingStack_1(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  itemStack, int32_t  index, ::UnityEngine::Color32  m_DefaultItem, int32_t  m_Capacity, int32_t  m_RolloverSize, int32_t  m_Count) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TMP_TextProcessingStack_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TMP_TextProcessingStack_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::TMP_TextProcessingStack`1
namespace TMPro {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12453))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12453), inst: 391 })
// CS Name: ::TMPro::TMP_TextProcessingStack`1<T>
struct CORDL_TYPE TMP_TextProcessingStack_1<float_t> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field k_DefaultCapacity offset 0x0
static constexpr int32_t  k_DefaultCapacity{static_cast<int32_t>(0x4)};

/// @brief Field itemStack offset 0x0
 __declspec(property(get=__get_itemStack, put=__set_itemStack)) ::ArrayW<float_t,::Array<float_t>*>  itemStack;

/// @brief Field index offset 0x8
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

/// @brief Field m_DefaultItem offset 0xc
 __declspec(property(get=__get_m_DefaultItem, put=__set_m_DefaultItem)) float_t  m_DefaultItem;

/// @brief Field m_Capacity offset 0x10
 __declspec(property(get=__get_m_Capacity, put=__set_m_Capacity)) int32_t  m_Capacity;

/// @brief Field m_RolloverSize offset 0x14
 __declspec(property(get=__get_m_RolloverSize, put=__set_m_RolloverSize)) int32_t  m_RolloverSize;

/// @brief Field m_Count offset 0x18
 __declspec(property(get=__get_m_Count, put=__set_m_Count)) int32_t  m_Count;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_current)) float_t  current;

 __declspec(property(get=get_rolloverSize, put=set_rolloverSize)) int32_t  rolloverSize;

constexpr void __set_itemStack(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_itemStack() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_itemStack() const;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

constexpr void __set_m_DefaultItem(float_t  value) ;

constexpr float_t& __get_m_DefaultItem() ;

constexpr float_t const& __get_m_DefaultItem() const;

constexpr void __set_m_Capacity(int32_t  value) ;

constexpr int32_t& __get_m_Capacity() ;

constexpr int32_t const& __get_m_Capacity() const;

constexpr void __set_m_RolloverSize(int32_t  value) ;

constexpr int32_t& __get_m_RolloverSize() ;

constexpr int32_t const& __get_m_RolloverSize() const;

constexpr void __set_m_Count(int32_t  value) ;

constexpr int32_t& __get_m_Count() ;

constexpr int32_t const& __get_m_Count() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<float_t,::Array<float_t>*>  stack) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity, int32_t  rolloverSize) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Count() ;

/// @brief Method get_current addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t get_current() ;

/// @brief Method get_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_rolloverSize() ;

/// @brief Method set_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_rolloverSize(int32_t  value) ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void SetDefault(::ArrayW<::TMPro::TMP_TextProcessingStack_1<float_t>,::Array<::TMPro::TMP_TextProcessingStack_1<float_t>>*>  stack, float_t  item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetDefault(float_t  item) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(float_t  item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t Remove() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Push(float_t  item) ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t Pop() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t Peek() ;

/// @brief Method CurrentItem addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t CurrentItem() ;

/// @brief Method PreviousItem addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t PreviousItem() ;

// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultItem", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMP_TextProcessingStack_1(::ArrayW<float_t,::Array<float_t>*>  itemStack, int32_t  index, float_t  m_DefaultItem, int32_t  m_Capacity, int32_t  m_RolloverSize, int32_t  m_Count) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TMP_TextProcessingStack_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TMP_TextProcessingStack_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::TMP_TextProcessingStack`1
namespace TMPro {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12453))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12453), inst: 98 })
// CS Name: ::TMPro::TMP_TextProcessingStack`1<T>
struct CORDL_TYPE TMP_TextProcessingStack_1<int32_t> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field k_DefaultCapacity offset 0x0
static constexpr int32_t  k_DefaultCapacity{static_cast<int32_t>(0x4)};

/// @brief Field itemStack offset 0x0
 __declspec(property(get=__get_itemStack, put=__set_itemStack)) ::ArrayW<int32_t,::Array<int32_t>*>  itemStack;

/// @brief Field index offset 0x8
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

/// @brief Field m_DefaultItem offset 0xc
 __declspec(property(get=__get_m_DefaultItem, put=__set_m_DefaultItem)) int32_t  m_DefaultItem;

/// @brief Field m_Capacity offset 0x10
 __declspec(property(get=__get_m_Capacity, put=__set_m_Capacity)) int32_t  m_Capacity;

/// @brief Field m_RolloverSize offset 0x14
 __declspec(property(get=__get_m_RolloverSize, put=__set_m_RolloverSize)) int32_t  m_RolloverSize;

/// @brief Field m_Count offset 0x18
 __declspec(property(get=__get_m_Count, put=__set_m_Count)) int32_t  m_Count;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_current)) int32_t  current;

 __declspec(property(get=get_rolloverSize, put=set_rolloverSize)) int32_t  rolloverSize;

constexpr void __set_itemStack(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_itemStack() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_itemStack() const;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

constexpr void __set_m_DefaultItem(int32_t  value) ;

constexpr int32_t& __get_m_DefaultItem() ;

constexpr int32_t const& __get_m_DefaultItem() const;

constexpr void __set_m_Capacity(int32_t  value) ;

constexpr int32_t& __get_m_Capacity() ;

constexpr int32_t const& __get_m_Capacity() const;

constexpr void __set_m_RolloverSize(int32_t  value) ;

constexpr int32_t& __get_m_RolloverSize() ;

constexpr int32_t const& __get_m_RolloverSize() const;

constexpr void __set_m_Count(int32_t  value) ;

constexpr int32_t& __get_m_Count() ;

constexpr int32_t const& __get_m_Count() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<int32_t,::Array<int32_t>*>  stack) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity, int32_t  rolloverSize) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Count() ;

/// @brief Method get_current addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_current() ;

/// @brief Method get_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_rolloverSize() ;

/// @brief Method set_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_rolloverSize(int32_t  value) ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void SetDefault(::ArrayW<::TMPro::TMP_TextProcessingStack_1<int32_t>,::Array<::TMPro::TMP_TextProcessingStack_1<int32_t>>*>  stack, int32_t  item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetDefault(int32_t  item) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(int32_t  item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Remove() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Push(int32_t  item) ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Pop() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Peek() ;

/// @brief Method CurrentItem addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t CurrentItem() ;

/// @brief Method PreviousItem addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t PreviousItem() ;

// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultItem", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMP_TextProcessingStack_1(::ArrayW<int32_t,::Array<int32_t>*>  itemStack, int32_t  index, int32_t  m_DefaultItem, int32_t  m_Capacity, int32_t  m_RolloverSize, int32_t  m_Count) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TMP_TextProcessingStack_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TMP_TextProcessingStack_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
// Type: TMPro::TMP_TextProcessingStack`1
namespace TMPro {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12453))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12453), inst: 2 })
// CS Name: ::TMPro::TMP_TextProcessingStack`1<T>
struct CORDL_TYPE TMP_TextProcessingStack_1<T> : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field k_DefaultCapacity offset 0x0
static constexpr int32_t  k_DefaultCapacity{static_cast<int32_t>(0x4)};

/// @brief Field itemStack offset 0x0
 __declspec(property(get=__get_itemStack, put=__set_itemStack)) ::ArrayW<T,::Array<T>*>  itemStack;

/// @brief Field index offset 0x8
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

/// @brief Field m_DefaultItem offset 0x10
 __declspec(property(get=__get_m_DefaultItem, put=__set_m_DefaultItem)) T  m_DefaultItem;

/// @brief Field m_Capacity offset 0x18
 __declspec(property(get=__get_m_Capacity, put=__set_m_Capacity)) int32_t  m_Capacity;

/// @brief Field m_RolloverSize offset 0x1c
 __declspec(property(get=__get_m_RolloverSize, put=__set_m_RolloverSize)) int32_t  m_RolloverSize;

/// @brief Field m_Count offset 0x20
 __declspec(property(get=__get_m_Count, put=__set_m_Count)) int32_t  m_Count;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_current)) T  current;

 __declspec(property(get=get_rolloverSize, put=set_rolloverSize)) int32_t  rolloverSize;

constexpr void __set_itemStack(::ArrayW<T,::Array<T>*>  value) ;

constexpr ::ArrayW<T,::Array<T>*>& __get_itemStack() ;

constexpr ::ArrayW<T,::Array<T>*> const& __get_itemStack() const;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

constexpr void __set_m_DefaultItem(T  value) ;

constexpr T& __get_m_DefaultItem() ;

constexpr T const& __get_m_DefaultItem() const;

constexpr void __set_m_Capacity(int32_t  value) ;

constexpr int32_t& __get_m_Capacity() ;

constexpr int32_t const& __get_m_Capacity() const;

constexpr void __set_m_RolloverSize(int32_t  value) ;

constexpr int32_t& __get_m_RolloverSize() ;

constexpr int32_t const& __get_m_RolloverSize() const;

constexpr void __set_m_Count(int32_t  value) ;

constexpr int32_t& __get_m_Count() ;

constexpr int32_t const& __get_m_Count() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<T,::Array<T>*>  stack) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity, int32_t  rolloverSize) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Count() ;

/// @brief Method get_current addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_current() ;

/// @brief Method get_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_rolloverSize() ;

/// @brief Method set_rolloverSize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_rolloverSize(int32_t  value) ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void SetDefault(::ArrayW<::TMPro::TMP_TextProcessingStack_1<T>,::Array<::TMPro::TMP_TextProcessingStack_1<T>>*>  stack, T  item) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetDefault(T  item) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(T  item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline T Remove() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Push(T  item) ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
inline T Pop() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline T Peek() ;

/// @brief Method CurrentItem addr 0x0 size 0xffffffffffffffff virtual false final false
inline T CurrentItem() ;

/// @brief Method PreviousItem addr 0x0 size 0xffffffffffffffff virtual false final false
inline T PreviousItem() ;

// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultItem", ty: "T", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMP_TextProcessingStack_1(::ArrayW<T,::Array<T>*>  itemStack, int32_t  index, T  m_DefaultItem, int32_t  m_Capacity, int32_t  m_RolloverSize, int32_t  m_Count) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TMP_TextProcessingStack_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TMP_TextProcessingStack_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::TMPro::TMP_TextProcessingStack_1, "TMPro", "TMP_TextProcessingStack`1");
