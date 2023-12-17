#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextProcessingStack_1)
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine::TextCore::Text {
struct MaterialReference;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
template<typename T>
struct TextProcessingStack_1;
}
namespace UnityEngine::TextCore::Text {
template<>
struct TextProcessingStack_1<::UnityEngine::Color32>;
}
namespace UnityEngine::TextCore::Text {
template<>
struct TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference>;
}
namespace UnityEngine::TextCore::Text {
template<::il2cpp_utils::il2cpp_reference_type T>
struct TextProcessingStack_1<T>;
}
namespace UnityEngine::TextCore::Text {
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
struct TextProcessingStack_1<T>;
}
namespace UnityEngine::TextCore::Text {
template<>
struct TextProcessingStack_1<float_t>;
}
namespace UnityEngine::TextCore::Text {
template<>
struct TextProcessingStack_1<int32_t>;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::TextCore::Text::TextProcessingStack_1);
// Type: UnityEngine.TextCore.Text::TextProcessingStack`1
// Type: UnityEngine.TextCore.Text::TextProcessingStack`1
namespace UnityEngine::TextCore::Text {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13727))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13727), inst: 5141 })
// CS Name: ::UnityEngine.TextCore.Text::TextProcessingStack`1<T>
struct CORDL_TYPE TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference> : public ::bs_hook::ValueTypeWrapper<0x58> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field itemStack offset 0x0
 __declspec(property(get=__get_itemStack, put=__set_itemStack)) ::ArrayW<::UnityEngine::TextCore::Text::MaterialReference,::Array<::UnityEngine::TextCore::Text::MaterialReference>*>  itemStack;

/// @brief Field index offset 0x8
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

/// @brief Field m_DefaultItem offset 0x10
 __declspec(property(get=__get_m_DefaultItem, put=__set_m_DefaultItem)) ::UnityEngine::TextCore::Text::MaterialReference  m_DefaultItem;

/// @brief Field m_Capacity offset 0x48
 __declspec(property(get=__get_m_Capacity, put=__set_m_Capacity)) int32_t  m_Capacity;

/// @brief Field m_RolloverSize offset 0x4c
 __declspec(property(get=__get_m_RolloverSize, put=__set_m_RolloverSize)) int32_t  m_RolloverSize;

/// @brief Field m_Count offset 0x50
 __declspec(property(get=__get_m_Count, put=__set_m_Count)) int32_t  m_Count;

constexpr void __set_itemStack(::ArrayW<::UnityEngine::TextCore::Text::MaterialReference,::Array<::UnityEngine::TextCore::Text::MaterialReference>*>  value) ;

constexpr ::ArrayW<::UnityEngine::TextCore::Text::MaterialReference,::Array<::UnityEngine::TextCore::Text::MaterialReference>*>& __get_itemStack() ;

constexpr ::ArrayW<::UnityEngine::TextCore::Text::MaterialReference,::Array<::UnityEngine::TextCore::Text::MaterialReference>*> const& __get_itemStack() const;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

constexpr void __set_m_DefaultItem(::UnityEngine::TextCore::Text::MaterialReference  value) ;

constexpr ::UnityEngine::TextCore::Text::MaterialReference& __get_m_DefaultItem() ;

constexpr ::UnityEngine::TextCore::Text::MaterialReference const& __get_m_DefaultItem() const;

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
inline void _ctor(::ArrayW<::UnityEngine::TextCore::Text::MaterialReference,::Array<::UnityEngine::TextCore::Text::MaterialReference>*>  stack) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method SetDefault addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetDefault(::UnityEngine::TextCore::Text::MaterialReference  item) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Add(::UnityEngine::TextCore::Text::MaterialReference  item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::TextCore::Text::MaterialReference Remove() ;

/// @brief Method Push addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Push(::UnityEngine::TextCore::Text::MaterialReference  item) ;

/// @brief Method Pop addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::TextCore::Text::MaterialReference Pop() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::TextCore::Text::MaterialReference Peek() ;

/// @brief Method CurrentItem addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::TextCore::Text::MaterialReference CurrentItem() ;

// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<::UnityEngine::TextCore::Text::MaterialReference,::Array<::UnityEngine::TextCore::Text::MaterialReference>*>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultItem", ty: "::UnityEngine::TextCore::Text::MaterialReference", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextProcessingStack_1(::ArrayW<::UnityEngine::TextCore::Text::MaterialReference,::Array<::UnityEngine::TextCore::Text::MaterialReference>*>  itemStack, int32_t  index, ::UnityEngine::TextCore::Text::MaterialReference  m_DefaultItem, int32_t  m_Capacity, int32_t  m_RolloverSize, int32_t  m_Count) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TextProcessingStack_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x58>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TextProcessingStack_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
// Type: UnityEngine.TextCore.Text::TextProcessingStack`1
namespace UnityEngine::TextCore::Text {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13727))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13727), inst: 974 })
// CS Name: ::UnityEngine.TextCore.Text::TextProcessingStack`1<T>
struct CORDL_TYPE TextProcessingStack_1<T> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

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

// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultItem", ty: "T", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextProcessingStack_1(::ArrayW<T,::Array<T>*>  itemStack, int32_t  index, T  m_DefaultItem, int32_t  m_Capacity, int32_t  m_RolloverSize, int32_t  m_Count) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TextProcessingStack_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TextProcessingStack_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
// Type: UnityEngine.TextCore.Text::TextProcessingStack`1
namespace UnityEngine::TextCore::Text {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13727))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13727), inst: 742 })
// CS Name: ::UnityEngine.TextCore.Text::TextProcessingStack`1<T>
struct CORDL_TYPE TextProcessingStack_1<::UnityEngine::Color32> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

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

// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultItem", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextProcessingStack_1(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  itemStack, int32_t  index, ::UnityEngine::Color32  m_DefaultItem, int32_t  m_Capacity, int32_t  m_RolloverSize, int32_t  m_Count) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TextProcessingStack_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TextProcessingStack_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
// Type: UnityEngine.TextCore.Text::TextProcessingStack`1
namespace UnityEngine::TextCore::Text {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13727))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13727), inst: 391 })
// CS Name: ::UnityEngine.TextCore.Text::TextProcessingStack`1<T>
struct CORDL_TYPE TextProcessingStack_1<float_t> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

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

// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultItem", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextProcessingStack_1(::ArrayW<float_t,::Array<float_t>*>  itemStack, int32_t  index, float_t  m_DefaultItem, int32_t  m_Capacity, int32_t  m_RolloverSize, int32_t  m_Count) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TextProcessingStack_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TextProcessingStack_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
// Type: UnityEngine.TextCore.Text::TextProcessingStack`1
namespace UnityEngine::TextCore::Text {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13727))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13727), inst: 98 })
// CS Name: ::UnityEngine.TextCore.Text::TextProcessingStack`1<T>
struct CORDL_TYPE TextProcessingStack_1<int32_t> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

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

// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultItem", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextProcessingStack_1(::ArrayW<int32_t,::Array<int32_t>*>  itemStack, int32_t  index, int32_t  m_DefaultItem, int32_t  m_Capacity, int32_t  m_RolloverSize, int32_t  m_Count) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TextProcessingStack_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TextProcessingStack_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
// Type: UnityEngine.TextCore.Text::TextProcessingStack`1
namespace UnityEngine::TextCore::Text {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13727))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13727), inst: 2 })
// CS Name: ::UnityEngine.TextCore.Text::TextProcessingStack`1<T>
struct CORDL_TYPE TextProcessingStack_1<T> : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

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

// Ctor Parameters [CppParam { name: "itemStack", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DefaultItem", ty: "T", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RolloverSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextProcessingStack_1(::ArrayW<T,::Array<T>*>  itemStack, int32_t  index, T  m_DefaultItem, int32_t  m_Capacity, int32_t  m_RolloverSize, int32_t  m_Count) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TextProcessingStack_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TextProcessingStack_1()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::TextCore::Text::TextProcessingStack_1, "UnityEngine.TextCore.Text", "TextProcessingStack`1");
