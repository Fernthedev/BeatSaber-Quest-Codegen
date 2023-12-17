#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_def.hpp"
CORDL_MODULE_EXPORT(BsonArray)
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace Newtonsoft::Json::Bson {
class BsonToken;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Newtonsoft::Json::Bson {
struct BsonType;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonArray;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Bson::BsonArray);
// Type: Newtonsoft.Json.Bson::BsonArray
namespace Newtonsoft::Json::Bson {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12074))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12076))
// CS Name: ::Newtonsoft.Json.Bson::BsonArray*
class CORDL_TYPE BsonArray : public ::Newtonsoft::Json::Bson::BsonToken {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Newtonsoft::Json::Bson::BsonToken)]{};

/// @brief Field _children offset 0x20
 __declspec(property(get=__get__children, put=__set__children)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>*  _children;

 __declspec(property(get=get_Type)) ::Newtonsoft::Json::Bson::BsonType  Type;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Bson::BsonToken*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Bson::BsonToken*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

constexpr void __set__children(::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>* __get__children() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Bson::BsonToken*>*> __get__children() const;

/// @brief Method Add addr 0x26c8290 size 0xb0 virtual false final false
inline void Add(::Newtonsoft::Json::Bson::BsonToken*  token) ;

/// @brief Method get_Type addr 0x26c8340 size 0x8 virtual true final false
inline ::Newtonsoft::Json::Bson::BsonType get_Type() ;

/// @brief Method GetEnumerator addr 0x26c626c size 0x90 virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::Newtonsoft::Json::Bson::BsonToken*>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x26c8348 size 0x4 virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

static inline ::Newtonsoft::Json::Bson::BsonArray* New_ctor() ;

/// @brief Method .ctor addr 0x26c834c size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BsonArray", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BsonArray(BsonArray && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BsonArray", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BsonArray(BsonArray const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BsonArray()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonArray, 0x28>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Bson
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonArray);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonArray*, "Newtonsoft.Json.Bson", "BsonArray");
