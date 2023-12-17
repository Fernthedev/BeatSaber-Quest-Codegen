#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerializationInfoEnumerator)
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
struct SerializationEntry;
}
namespace System {
class Type;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SerializationInfoEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::SerializationInfoEnumerator);
// Type: System.Runtime.Serialization::SerializationInfoEnumerator
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3199))
// CS Name: ::System.Runtime.Serialization::SerializationInfoEnumerator*
class CORDL_TYPE SerializationInfoEnumerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field _members offset 0x10
 __declspec(property(get=__get__members, put=__set__members)) ::ArrayW<::StringW,::Array<::StringW>*>  _members;

/// @brief Field _data offset 0x18
 __declspec(property(get=__get__data, put=__set__data)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  _data;

/// @brief Field _types offset 0x20
 __declspec(property(get=__get__types, put=__set__types)) ::ArrayW<::System::Type*,::Array<::System::Type*>*>  _types;

/// @brief Field _numItems offset 0x28
 __declspec(property(get=__get__numItems, put=__set__numItems)) int32_t  _numItems;

/// @brief Field _currItem offset 0x2c
 __declspec(property(get=__get__currItem, put=__set__currItem)) int32_t  _currItem;

/// @brief Field _current offset 0x30
 __declspec(property(get=__get__current, put=__set__current)) bool  _current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

 __declspec(property(get=get_Current)) ::System::Runtime::Serialization::SerializationEntry  Current;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Value)) ::System::Object*  Value;

 __declspec(property(get=get_ObjectType)) ::System::Type*  ObjectType;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

constexpr void __set__members(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get__members() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get__members() const;

constexpr void __set__data(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& __get__data() ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& __get__data() const;

constexpr void __set__types(::ArrayW<::System::Type*,::Array<::System::Type*>*>  value) ;

constexpr ::ArrayW<::System::Type*,::Array<::System::Type*>*>& __get__types() ;

constexpr ::ArrayW<::System::Type*,::Array<::System::Type*>*> const& __get__types() const;

constexpr void __set__numItems(int32_t  value) ;

constexpr int32_t& __get__numItems() ;

constexpr int32_t const& __get__numItems() const;

constexpr void __set__currItem(int32_t  value) ;

constexpr int32_t& __get__currItem() ;

constexpr int32_t const& __get__currItem() const;

constexpr void __set__current(bool  value) ;

constexpr bool& __get__current() ;

constexpr bool const& __get__current() const;

static inline ::System::Runtime::Serialization::SerializationInfoEnumerator* New_ctor(::ArrayW<::StringW,::Array<::StringW>*>  members, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  info, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  types, int32_t  numItems) ;

/// @brief Method .ctor addr 0x24b451c size 0x50 virtual false final false
inline void _ctor(::ArrayW<::StringW,::Array<::StringW>*>  members, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  info, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  types, int32_t  numItems) ;

/// @brief Method MoveNext addr 0x24b456c size 0x2c virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x24b4598 size 0x70 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method get_Current addr 0x24b4608 size 0xc8 virtual false final false
inline ::System::Runtime::Serialization::SerializationEntry get_Current() ;

/// @brief Method Reset addr 0x24b46d0 size 0x10 virtual true final true
inline void Reset() ;

/// @brief Method get_Name addr 0x24b46e0 size 0x88 virtual false final false
inline ::StringW get_Name() ;

/// @brief Method get_Value addr 0x24b4768 size 0x88 virtual false final false
inline ::System::Object* get_Value() ;

/// @brief Method get_ObjectType addr 0x24b47f0 size 0x88 virtual false final false
inline ::System::Type* get_ObjectType() ;

// Ctor Parameters [CppParam { name: "", ty: "SerializationInfoEnumerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializationInfoEnumerator(SerializationInfoEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializationInfoEnumerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializationInfoEnumerator(SerializationInfoEnumerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SerializationInfoEnumerator()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SerializationInfoEnumerator, 0x38>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::SerializationInfoEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SerializationInfoEnumerator*, "System.Runtime.Serialization", "SerializationInfoEnumerator");
