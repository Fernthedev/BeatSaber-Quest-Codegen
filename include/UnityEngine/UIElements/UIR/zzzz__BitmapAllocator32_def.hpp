#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BitmapAllocator32)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements::UIR {
struct BMPAlloc;
}
namespace UnityEngine::UIElements::UIR {
struct __BitmapAllocator32__Page;
}
namespace UnityEngine::UIElements::UIR {
class BaseShaderInfoStorage;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct BitmapAllocator32;
}
namespace UnityEngine::UIElements::UIR {
struct __BitmapAllocator32__Page;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::BitmapAllocator32);
MARK_VAL_T(::UnityEngine::UIElements::UIR::__BitmapAllocator32__Page);
// Type: ::Page
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7375))
// CS Name: ::BitmapAllocator32::Page
struct CORDL_TYPE __BitmapAllocator32__Page : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field x offset 0x0
 __declspec(property(get=__get_x, put=__set_x)) uint16_t  x;

/// @brief Field y offset 0x2
 __declspec(property(get=__get_y, put=__set_y)) uint16_t  y;

/// @brief Field freeSlots offset 0x4
 __declspec(property(get=__get_freeSlots, put=__set_freeSlots)) int32_t  freeSlots;

constexpr void __set_x(uint16_t  value) ;

constexpr uint16_t& __get_x() ;

constexpr uint16_t const& __get_x() const;

constexpr void __set_y(uint16_t  value) ;

constexpr uint16_t& __get_y() ;

constexpr uint16_t const& __get_y() const;

constexpr void __set_freeSlots(int32_t  value) ;

constexpr int32_t& __get_freeSlots() ;

constexpr int32_t const& __get_freeSlots() const;

// Ctor Parameters [CppParam { name: "x", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "freeSlots", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __BitmapAllocator32__Page(uint16_t  x, uint16_t  y, int32_t  freeSlots) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __BitmapAllocator32__Page(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __BitmapAllocator32__Page()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__BitmapAllocator32__Page, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::BitmapAllocator32
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7376))
// CS Name: ::UnityEngine.UIElements.UIR::BitmapAllocator32
struct CORDL_TYPE BitmapAllocator32 : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
using Page = ::UnityEngine::UIElements::UIR::__BitmapAllocator32__Page;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_PageHeight offset 0x0
 __declspec(property(get=__get_m_PageHeight, put=__set_m_PageHeight)) int32_t  m_PageHeight;

/// @brief Field m_Pages offset 0x8
 __declspec(property(get=__get_m_Pages, put=__set_m_Pages)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__BitmapAllocator32__Page>*  m_Pages;

/// @brief Field m_AllocMap offset 0x10
 __declspec(property(get=__get_m_AllocMap, put=__set_m_AllocMap)) ::System::Collections::Generic::List_1<uint32_t>*  m_AllocMap;

/// @brief Field m_EntryWidth offset 0x18
 __declspec(property(get=__get_m_EntryWidth, put=__set_m_EntryWidth)) int32_t  m_EntryWidth;

/// @brief Field m_EntryHeight offset 0x1c
 __declspec(property(get=__get_m_EntryHeight, put=__set_m_EntryHeight)) int32_t  m_EntryHeight;

 __declspec(property(get=get_entryWidth)) int32_t  entryWidth;

 __declspec(property(get=get_entryHeight)) int32_t  entryHeight;

constexpr void __set_m_PageHeight(int32_t  value) ;

constexpr int32_t& __get_m_PageHeight() ;

constexpr int32_t const& __get_m_PageHeight() const;

constexpr void __set_m_Pages(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__BitmapAllocator32__Page>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__BitmapAllocator32__Page>* __get_m_Pages() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__BitmapAllocator32__Page>*> __get_m_Pages() const;

constexpr void __set_m_AllocMap(::System::Collections::Generic::List_1<uint32_t>*  value) ;

constexpr ::System::Collections::Generic::List_1<uint32_t>* __get_m_AllocMap() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<uint32_t>*> __get_m_AllocMap() const;

constexpr void __set_m_EntryWidth(int32_t  value) ;

constexpr int32_t& __get_m_EntryWidth() ;

constexpr int32_t const& __get_m_EntryWidth() const;

constexpr void __set_m_EntryHeight(int32_t  value) ;

constexpr int32_t& __get_m_EntryHeight() ;

constexpr int32_t const& __get_m_EntryHeight() const;

/// @brief Method Construct addr 0x2e8800c size 0x110 virtual false final false
inline void Construct(int32_t  pageHeight, int32_t  entryWidth, int32_t  entryHeight) ;

/// @brief Method ForceFirstAlloc addr 0x2e8811c size 0x1cc virtual false final false
inline void ForceFirstAlloc(uint16_t  firstPageX, uint16_t  firstPageY) ;

/// @brief Method Allocate addr 0x2e882e8 size 0x41c virtual false final false
inline ::UnityEngine::UIElements::UIR::BMPAlloc Allocate(::UnityEngine::UIElements::UIR::BaseShaderInfoStorage*  storage) ;

/// @brief Method Free addr 0x2e88768 size 0x144 virtual false final false
inline void Free(::UnityEngine::UIElements::UIR::BMPAlloc  alloc) ;

/// @brief Method get_entryWidth addr 0x2e888ac size 0x8 virtual false final false
inline int32_t get_entryWidth() ;

/// @brief Method get_entryHeight addr 0x2e888b4 size 0x8 virtual false final false
inline int32_t get_entryHeight() ;

/// @brief Method GetAllocPageAtlasLocation addr 0x2e888bc size 0x78 virtual false final false
inline void GetAllocPageAtlasLocation(int32_t  page, ByRef<uint16_t>  x, ByRef<uint16_t>  y) ;

/// @brief Method CountTrailingZeroes addr 0x2e88704 size 0x64 virtual false final false
static inline uint8_t CountTrailingZeroes(uint32_t  val) ;

// Ctor Parameters [CppParam { name: "m_PageHeight", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Pages", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__BitmapAllocator32__Page>*", modifiers: "", def_value: None }, CppParam { name: "m_AllocMap", ty: "::System::Collections::Generic::List_1<uint32_t>*", modifiers: "", def_value: None }, CppParam { name: "m_EntryWidth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_EntryHeight", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BitmapAllocator32(int32_t  m_PageHeight, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__BitmapAllocator32__Page>*  m_Pages, ::System::Collections::Generic::List_1<uint32_t>*  m_AllocMap, int32_t  m_EntryWidth, int32_t  m_EntryHeight) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit BitmapAllocator32(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 BitmapAllocator32()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::BitmapAllocator32, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::BitmapAllocator32, "UnityEngine.UIElements.UIR", "BitmapAllocator32");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__BitmapAllocator32__Page, "UnityEngine.UIElements.UIR", "BitmapAllocator32/Page");
