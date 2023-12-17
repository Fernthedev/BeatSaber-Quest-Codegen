#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectHolderList)
namespace System::Runtime::Serialization {
class ObjectHolder;
}
namespace System::Runtime::Serialization {
class ObjectHolderListEnumerator;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ObjectHolderList;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::ObjectHolderList);
// Type: System.Runtime.Serialization::ObjectHolderList
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3222))
// CS Name: ::System.Runtime.Serialization::ObjectHolderList*
class CORDL_TYPE ObjectHolderList : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_values offset 0x10
 __declspec(property(get=__get_m_values, put=__set_m_values)) ::ArrayW<::System::Runtime::Serialization::ObjectHolder*,::Array<::System::Runtime::Serialization::ObjectHolder*>*>  m_values;

/// @brief Field m_count offset 0x18
 __declspec(property(get=__get_m_count, put=__set_m_count)) int32_t  m_count;

 __declspec(property(get=get_Version)) int32_t  Version;

 __declspec(property(get=get_Count)) int32_t  Count;

constexpr void __set_m_values(::ArrayW<::System::Runtime::Serialization::ObjectHolder*,::Array<::System::Runtime::Serialization::ObjectHolder*>*>  value) ;

constexpr ::ArrayW<::System::Runtime::Serialization::ObjectHolder*,::Array<::System::Runtime::Serialization::ObjectHolder*>*>& __get_m_values() ;

constexpr ::ArrayW<::System::Runtime::Serialization::ObjectHolder*,::Array<::System::Runtime::Serialization::ObjectHolder*>*> const& __get_m_values() const;

constexpr void __set_m_count(int32_t  value) ;

constexpr int32_t& __get_m_count() ;

constexpr int32_t const& __get_m_count() const;

static inline ::System::Runtime::Serialization::ObjectHolderList* New_ctor() ;

/// @brief Method .ctor addr 0x24b8d24 size 0x8 virtual false final false
inline void _ctor() ;

static inline ::System::Runtime::Serialization::ObjectHolderList* New_ctor(int32_t  startingSize) ;

/// @brief Method .ctor addr 0x24bcb70 size 0x6c virtual false final false
inline void _ctor(int32_t  startingSize) ;

/// @brief Method Add addr 0x24bcbdc size 0xa8 virtual true final false
inline void Add(::System::Runtime::Serialization::ObjectHolder*  value) ;

/// @brief Method GetFixupEnumerator addr 0x24bbb34 size 0x64 virtual false final false
inline ::System::Runtime::Serialization::ObjectHolderListEnumerator* GetFixupEnumerator() ;

/// @brief Method EnlargeArray addr 0x24bcc84 size 0x88 virtual false final false
inline void EnlargeArray() ;

/// @brief Method get_Version addr 0x24bcd54 size 0x8 virtual false final false
inline int32_t get_Version() ;

/// @brief Method get_Count addr 0x24bcd5c size 0x8 virtual false final false
inline int32_t get_Count() ;

// Ctor Parameters [CppParam { name: "", ty: "ObjectHolderList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectHolderList(ObjectHolderList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectHolderList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectHolderList(ObjectHolderList const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObjectHolderList()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::ObjectHolderList, 0x20>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::ObjectHolderList);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ObjectHolderList*, "System.Runtime.Serialization", "ObjectHolderList");
