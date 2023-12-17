#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectHolderListEnumerator)
namespace System::Runtime::Serialization {
class ObjectHolderList;
}
namespace System::Runtime::Serialization {
class ObjectHolder;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ObjectHolderListEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::ObjectHolderListEnumerator);
// Type: System.Runtime.Serialization::ObjectHolderListEnumerator
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3223))
// CS Name: ::System.Runtime.Serialization::ObjectHolderListEnumerator*
class CORDL_TYPE ObjectHolderListEnumerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field m_isFixupEnumerator offset 0x10
 __declspec(property(get=__get_m_isFixupEnumerator, put=__set_m_isFixupEnumerator)) bool  m_isFixupEnumerator;

/// @brief Field m_list offset 0x18
 __declspec(property(get=__get_m_list, put=__set_m_list)) ::System::Runtime::Serialization::ObjectHolderList*  m_list;

/// @brief Field m_startingVersion offset 0x20
 __declspec(property(get=__get_m_startingVersion, put=__set_m_startingVersion)) int32_t  m_startingVersion;

/// @brief Field m_currPos offset 0x24
 __declspec(property(get=__get_m_currPos, put=__set_m_currPos)) int32_t  m_currPos;

 __declspec(property(get=get_Current)) ::System::Runtime::Serialization::ObjectHolder*  Current;

constexpr void __set_m_isFixupEnumerator(bool  value) ;

constexpr bool& __get_m_isFixupEnumerator() ;

constexpr bool const& __get_m_isFixupEnumerator() const;

constexpr void __set_m_list(::System::Runtime::Serialization::ObjectHolderList*  value) ;

constexpr ::System::Runtime::Serialization::ObjectHolderList* __get_m_list() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ObjectHolderList*> __get_m_list() const;

constexpr void __set_m_startingVersion(int32_t  value) ;

constexpr int32_t& __get_m_startingVersion() ;

constexpr int32_t const& __get_m_startingVersion() const;

constexpr void __set_m_currPos(int32_t  value) ;

constexpr int32_t& __get_m_currPos() ;

constexpr int32_t const& __get_m_currPos() const;

static inline ::System::Runtime::Serialization::ObjectHolderListEnumerator* New_ctor(::System::Runtime::Serialization::ObjectHolderList*  list, bool  isFixupEnumerator) ;

/// @brief Method .ctor addr 0x24bcd0c size 0x48 virtual false final false
inline void _ctor(::System::Runtime::Serialization::ObjectHolderList*  list, bool  isFixupEnumerator) ;

/// @brief Method MoveNext addr 0x24bbbf0 size 0xbc virtual false final false
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x24bbb98 size 0x3c virtual false final false
inline ::System::Runtime::Serialization::ObjectHolder* get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "ObjectHolderListEnumerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectHolderListEnumerator(ObjectHolderListEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectHolderListEnumerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectHolderListEnumerator(ObjectHolderListEnumerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObjectHolderListEnumerator()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::ObjectHolderListEnumerator, 0x28>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::ObjectHolderListEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ObjectHolderListEnumerator*, "System.Runtime.Serialization", "ObjectHolderListEnumerator");
