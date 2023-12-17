#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ReflectionAttributeProvider)
namespace Newtonsoft::Json::Serialization {
class IAttributeProvider;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class Attribute;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class ReflectionAttributeProvider;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::ReflectionAttributeProvider);
// Type: Newtonsoft.Json.Serialization::ReflectionAttributeProvider
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11909))
// CS Name: ::Newtonsoft.Json.Serialization::ReflectionAttributeProvider*
class CORDL_TYPE ReflectionAttributeProvider : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _attributeProvider offset 0x10
 __declspec(property(get=__get__attributeProvider, put=__set__attributeProvider)) ::System::Object*  _attributeProvider;

/// @brief Convert operator to "::Newtonsoft::Json::Serialization::IAttributeProvider"
constexpr operator  ::Newtonsoft::Json::Serialization::IAttributeProvider*() noexcept;

constexpr void __set__attributeProvider(::System::Object*  value) ;

constexpr ::System::Object* __get__attributeProvider() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__attributeProvider() const;

static inline ::Newtonsoft::Json::Serialization::ReflectionAttributeProvider* New_ctor(::System::Object*  attributeProvider) ;

/// @brief Method .ctor addr 0x266ae54 size 0x68 virtual false final false
inline void _ctor(::System::Object*  attributeProvider) ;

/// @brief Method GetAttributes addr 0x266aebc size 0x6c virtual true final true
inline ::System::Collections::Generic::IList_1<::System::Attribute*>* GetAttributes(bool  inherit) ;

/// @brief Method GetAttributes addr 0x266af28 size 0x70 virtual true final true
inline ::System::Collections::Generic::IList_1<::System::Attribute*>* GetAttributes(::System::Type*  attributeType, bool  inherit) ;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionAttributeProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionAttributeProvider(ReflectionAttributeProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionAttributeProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionAttributeProvider(ReflectionAttributeProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ReflectionAttributeProvider()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::ReflectionAttributeProvider, 0x18>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::ReflectionAttributeProvider);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::ReflectionAttributeProvider*, "Newtonsoft.Json.Serialization", "ReflectionAttributeProvider");
