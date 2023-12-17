#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Metadata/zzzz__SoapAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SoapMethodAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Metadata {
class SoapMethodAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Metadata::SoapMethodAttribute);
// Type: System.Runtime.Remoting.Metadata::SoapMethodAttribute
namespace System::Runtime::Remoting::Metadata {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3140))
// CS Name: ::System.Runtime.Remoting.Metadata::SoapMethodAttribute*
class CORDL_TYPE SoapMethodAttribute : public ::System::Runtime::Remoting::Metadata::SoapAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Runtime::Remoting::Metadata::SoapAttribute)]{};

/// @brief Field _responseElement offset 0x28
 __declspec(property(get=__get__responseElement, put=__set__responseElement)) ::StringW  _responseElement;

/// @brief Field _responseNamespace offset 0x30
 __declspec(property(get=__get__responseNamespace, put=__set__responseNamespace)) ::StringW  _responseNamespace;

/// @brief Field _returnElement offset 0x38
 __declspec(property(get=__get__returnElement, put=__set__returnElement)) ::StringW  _returnElement;

/// @brief Field _soapAction offset 0x40
 __declspec(property(get=__get__soapAction, put=__set__soapAction)) ::StringW  _soapAction;

/// @brief Field _useAttribute offset 0x48
 __declspec(property(get=__get__useAttribute, put=__set__useAttribute)) bool  _useAttribute;

/// @brief Field _namespace offset 0x50
 __declspec(property(get=__get__namespace, put=__set__namespace)) ::StringW  _namespace;

 __declspec(property(get=get_UseAttribute)) bool  UseAttribute;

 __declspec(property(get=get_XmlNamespace)) ::StringW  XmlNamespace;

constexpr void __set__responseElement(::StringW  value) ;

constexpr ::StringW& __get__responseElement() ;

constexpr ::StringW const& __get__responseElement() const;

constexpr void __set__responseNamespace(::StringW  value) ;

constexpr ::StringW& __get__responseNamespace() ;

constexpr ::StringW const& __get__responseNamespace() const;

constexpr void __set__returnElement(::StringW  value) ;

constexpr ::StringW& __get__returnElement() ;

constexpr ::StringW const& __get__returnElement() const;

constexpr void __set__soapAction(::StringW  value) ;

constexpr ::StringW& __get__soapAction() ;

constexpr ::StringW const& __get__soapAction() const;

constexpr void __set__useAttribute(bool  value) ;

constexpr bool& __get__useAttribute() ;

constexpr bool const& __get__useAttribute() const;

constexpr void __set__namespace(::StringW  value) ;

constexpr ::StringW& __get__namespace() ;

constexpr ::StringW const& __get__namespace() const;

static inline ::System::Runtime::Remoting::Metadata::SoapMethodAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x24a5d64 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method get_UseAttribute addr 0x24a5d6c size 0x8 virtual true final false
inline bool get_UseAttribute() ;

/// @brief Method get_XmlNamespace addr 0x24a5d74 size 0x8 virtual true final false
inline ::StringW get_XmlNamespace() ;

/// @brief Method SetReflectionObject addr 0x24a5d7c size 0x1ac virtual true final false
inline void SetReflectionObject(::System::Object*  reflectionObject) ;

// Ctor Parameters [CppParam { name: "", ty: "SoapMethodAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SoapMethodAttribute(SoapMethodAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SoapMethodAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SoapMethodAttribute(SoapMethodAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SoapMethodAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Metadata::SoapMethodAttribute, 0x58>, "Size mismatch!");

} // namespace end def System::Runtime::Remoting::Metadata
NEED_NO_BOX(::System::Runtime::Remoting::Metadata::SoapMethodAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Metadata::SoapMethodAttribute*, "System.Runtime.Remoting.Metadata", "SoapMethodAttribute");
