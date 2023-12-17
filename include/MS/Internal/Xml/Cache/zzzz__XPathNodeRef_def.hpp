#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XPathNodeRef)
namespace MS::Internal::Xml::Cache {
struct XPathNode;
}
// Forward declare root types
namespace MS::Internal::Xml::Cache {
struct XPathNodeRef;
}
// Write type traits
MARK_VAL_T(::MS::Internal::Xml::Cache::XPathNodeRef);
// Type: MS.Internal.Xml.Cache::XPathNodeRef
namespace MS::Internal::Xml::Cache {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11769))
// CS Name: ::MS.Internal.Xml.Cache::XPathNodeRef
struct CORDL_TYPE XPathNodeRef : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _page offset 0x0
 __declspec(property(get=__get__page, put=__set__page)) ::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>  _page;

/// @brief Field _idx offset 0x8
 __declspec(property(get=__get__idx, put=__set__idx)) int32_t  _idx;

 __declspec(property(get=get_Page)) ::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>  Page;

 __declspec(property(get=get_Index)) int32_t  Index;

constexpr void __set__page(::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>  value) ;

constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>& __get__page() ;

constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*> const& __get__page() const;

constexpr void __set__idx(int32_t  value) ;

constexpr int32_t& __get__idx() ;

constexpr int32_t const& __get__idx() const;

/// @brief Method .ctor addr 0x28eb7a4 size 0xc virtual false final false
inline void _ctor(::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>  page, int32_t  idx) ;

/// @brief Method get_Page addr 0x28eb7b0 size 0x8 virtual false final false
inline ::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*> get_Page() ;

/// @brief Method get_Index addr 0x28eb7b8 size 0x8 virtual false final false
inline int32_t get_Index() ;

/// @brief Method GetHashCode addr 0x28eb7c0 size 0x10 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "_page", ty: "::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>", modifiers: "", def_value: None }, CppParam { name: "_idx", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XPathNodeRef(::ArrayW<::MS::Internal::Xml::Cache::XPathNode,::Array<::MS::Internal::Xml::Cache::XPathNode>*>  _page, int32_t  _idx) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit XPathNodeRef(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 XPathNodeRef()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::Cache::XPathNodeRef, 0x10>, "Size mismatch!");

} // namespace end def MS::Internal::Xml::Cache
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::Cache::XPathNodeRef, "MS.Internal.Xml.Cache", "XPathNodeRef");
