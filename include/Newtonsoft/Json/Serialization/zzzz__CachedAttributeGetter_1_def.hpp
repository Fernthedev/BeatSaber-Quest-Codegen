#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CachedAttributeGetter_1)
namespace Newtonsoft::Json::Utilities {
template<typename TKey,typename TValue>
class ThreadSafeStore_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
template<typename T>
class CachedAttributeGetter_1;
}
namespace Newtonsoft::Json::Serialization {
template<::il2cpp_utils::il2cpp_reference_type T>
class CachedAttributeGetter_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Serialization::CachedAttributeGetter_1);
// Type: Newtonsoft.Json.Serialization::CachedAttributeGetter`1
// Type: Newtonsoft.Json.Serialization::CachedAttributeGetter`1
namespace Newtonsoft::Json::Serialization {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11962)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11962), inst: 2 })
// CS Name: ::Newtonsoft.Json.Serialization::CachedAttributeGetter`1<T>*
class CORDL_TYPE CachedAttributeGetter_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_TypeAttributeCache(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Object*,T>*  value) ;

static inline ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::System::Object*,T>* getStaticF_TypeAttributeCache() ;

/// @brief Method GetAttribute addr 0x0 size 0xffffffffffffffff virtual false final false
static inline T GetAttribute(::System::Object*  type) ;

// Ctor Parameters [CppParam { name: "", ty: "CachedAttributeGetter_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CachedAttributeGetter_1(CachedAttributeGetter_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CachedAttributeGetter_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CachedAttributeGetter_1(CachedAttributeGetter_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CachedAttributeGetter_1()  = default;
public:


// Fields

// Static field TypeAttributeCache


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Serialization::CachedAttributeGetter_1, "Newtonsoft.Json.Serialization", "CachedAttributeGetter`1");
