// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: UnityEngine.ProBuilder.IHasDefault
#include "UnityEngine/ProBuilder/IHasDefault.hpp"
// Including type: UnityEngine.ISerializationCallbackReceiver
#include "UnityEngine/ISerializationCallbackReceiver.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.PreferenceDictionary
  // [TokenAttribute] Offset: FFFFFFFF
  class PreferenceDictionary : public UnityEngine::ScriptableObject/*, public UnityEngine::ProBuilder::IHasDefault, public UnityEngine::ISerializationCallbackReceiver*/ {
    public:
    // private System.Collections.Generic.Dictionary`2<System.String,System.Boolean> m_Bool
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<::Il2CppString*, bool>* m_Bool;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, bool>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,System.Int32> m_Int
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::Dictionary_2<::Il2CppString*, int>* m_Int;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, int>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,System.Single> m_Float
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<::Il2CppString*, float>* m_Float;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, float>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,System.String> m_String
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* m_String;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color> m_Color
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::Dictionary_2<::Il2CppString*, UnityEngine::Color>* m_Color;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, UnityEngine::Color>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Material> m_Material
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::Dictionary_2<::Il2CppString*, UnityEngine::Material*>* m_Material;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, UnityEngine::Material*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> m_Bool_keys
    // Size: 0x8
    // Offset: 0x48
    System::Collections::Generic::List_1<::Il2CppString*>* m_Bool_keys;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> m_Int_keys
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::List_1<::Il2CppString*>* m_Int_keys;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> m_Float_keys
    // Size: 0x8
    // Offset: 0x58
    System::Collections::Generic::List_1<::Il2CppString*>* m_Float_keys;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> m_String_keys
    // Size: 0x8
    // Offset: 0x60
    System::Collections::Generic::List_1<::Il2CppString*>* m_String_keys;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> m_Color_keys
    // Size: 0x8
    // Offset: 0x68
    System::Collections::Generic::List_1<::Il2CppString*>* m_Color_keys;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> m_Material_keys
    // Size: 0x8
    // Offset: 0x70
    System::Collections::Generic::List_1<::Il2CppString*>* m_Material_keys;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Boolean> m_Bool_values
    // Size: 0x8
    // Offset: 0x78
    System::Collections::Generic::List_1<bool>* m_Bool_values;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<bool>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Int32> m_Int_values
    // Size: 0x8
    // Offset: 0x80
    System::Collections::Generic::List_1<int>* m_Int_values;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<int>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Single> m_Float_values
    // Size: 0x8
    // Offset: 0x88
    System::Collections::Generic::List_1<float>* m_Float_values;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<float>*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> m_String_values
    // Size: 0x8
    // Offset: 0x90
    System::Collections::Generic::List_1<::Il2CppString*>* m_String_values;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Color> m_Color_values
    // Size: 0x8
    // Offset: 0x98
    System::Collections::Generic::List_1<UnityEngine::Color>* m_Color_values;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Color>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Material> m_Material_values
    // Size: 0x8
    // Offset: 0xA0
    System::Collections::Generic::List_1<UnityEngine::Material*>* m_Material_values;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Material*>*) == 0x8);
    // Creating value type constructor for type: PreferenceDictionary
    PreferenceDictionary(System::Collections::Generic::Dictionary_2<::Il2CppString*, bool>* m_Bool_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, int>* m_Int_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, float>* m_Float_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* m_String_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, UnityEngine::Color>* m_Color_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, UnityEngine::Material*>* m_Material_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* m_Bool_keys_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* m_Int_keys_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* m_Float_keys_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* m_String_keys_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* m_Color_keys_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* m_Material_keys_ = {}, System::Collections::Generic::List_1<bool>* m_Bool_values_ = {}, System::Collections::Generic::List_1<int>* m_Int_values_ = {}, System::Collections::Generic::List_1<float>* m_Float_values_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* m_String_values_ = {}, System::Collections::Generic::List_1<UnityEngine::Color>* m_Color_values_ = {}, System::Collections::Generic::List_1<UnityEngine::Material*>* m_Material_values_ = {}) noexcept : m_Bool{m_Bool_}, m_Int{m_Int_}, m_Float{m_Float_}, m_String{m_String_}, m_Color{m_Color_}, m_Material{m_Material_}, m_Bool_keys{m_Bool_keys_}, m_Int_keys{m_Int_keys_}, m_Float_keys{m_Float_keys_}, m_String_keys{m_String_keys_}, m_Color_keys{m_Color_keys_}, m_Material_keys{m_Material_keys_}, m_Bool_values{m_Bool_values_}, m_Int_values{m_Int_values_}, m_Float_values{m_Float_values_}, m_String_values{m_String_values_}, m_Color_values{m_Color_values_}, m_Material_values{m_Material_values_} {}
    // Creating interface conversion operator: operator UnityEngine::ProBuilder::IHasDefault
    operator UnityEngine::ProBuilder::IHasDefault() noexcept {
      return *reinterpret_cast<UnityEngine::ProBuilder::IHasDefault*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::ISerializationCallbackReceiver
    operator UnityEngine::ISerializationCallbackReceiver() noexcept {
      return *reinterpret_cast<UnityEngine::ISerializationCallbackReceiver*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,System.Boolean> m_Bool
    System::Collections::Generic::Dictionary_2<::Il2CppString*, bool>*& dyn_m_Bool();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,System.Int32> m_Int
    System::Collections::Generic::Dictionary_2<::Il2CppString*, int>*& dyn_m_Int();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,System.Single> m_Float
    System::Collections::Generic::Dictionary_2<::Il2CppString*, float>*& dyn_m_Float();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,System.String> m_String
    System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>*& dyn_m_String();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color> m_Color
    System::Collections::Generic::Dictionary_2<::Il2CppString*, UnityEngine::Color>*& dyn_m_Color();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Material> m_Material
    System::Collections::Generic::Dictionary_2<::Il2CppString*, UnityEngine::Material*>*& dyn_m_Material();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> m_Bool_keys
    System::Collections::Generic::List_1<::Il2CppString*>*& dyn_m_Bool_keys();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> m_Int_keys
    System::Collections::Generic::List_1<::Il2CppString*>*& dyn_m_Int_keys();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> m_Float_keys
    System::Collections::Generic::List_1<::Il2CppString*>*& dyn_m_Float_keys();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> m_String_keys
    System::Collections::Generic::List_1<::Il2CppString*>*& dyn_m_String_keys();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> m_Color_keys
    System::Collections::Generic::List_1<::Il2CppString*>*& dyn_m_Color_keys();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> m_Material_keys
    System::Collections::Generic::List_1<::Il2CppString*>*& dyn_m_Material_keys();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Boolean> m_Bool_values
    System::Collections::Generic::List_1<bool>*& dyn_m_Bool_values();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Int32> m_Int_values
    System::Collections::Generic::List_1<int>*& dyn_m_Int_values();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Single> m_Float_values
    System::Collections::Generic::List_1<float>*& dyn_m_Float_values();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> m_String_values
    System::Collections::Generic::List_1<::Il2CppString*>*& dyn_m_String_values();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Color> m_Color_values
    System::Collections::Generic::List_1<UnityEngine::Color>*& dyn_m_Color_values();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Material> m_Material_values
    System::Collections::Generic::List_1<UnityEngine::Material*>*& dyn_m_Material_values();
    // public System.Void OnBeforeSerialize()
    // Offset: 0x1752F74
    void OnBeforeSerialize();
    // public System.Void OnAfterDeserialize()
    // Offset: 0x17531C4
    void OnAfterDeserialize();
    // public System.Void SetDefaultValues()
    // Offset: 0x1753580
    void SetDefaultValues();
    // public System.Boolean HasKey(System.String key)
    // Offset: 0x1753650
    bool HasKey(::Il2CppString* key);
    // public System.Boolean HasKey(System.String key)
    // Offset: 0xFFFFFFFF
    template<class T>
    bool HasKey(::Il2CppString* key) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::PreferenceDictionary::HasKey");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "HasKey", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<bool, false>(___instance_arg, ___generic__method, key);
    }
    // public System.Void DeleteKey(System.String key)
    // Offset: 0x175376C
    void DeleteKey(::Il2CppString* key);
    // public T Get(System.String key, T fallback)
    // Offset: 0xFFFFFFFF
    template<class T>
    T Get(::Il2CppString* key, T fallback) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::PreferenceDictionary::Get");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Get", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractType(fallback)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<T, false>(___instance_arg, ___generic__method, key, fallback);
    }
    // public System.Void Set(System.String key, T value)
    // Offset: 0xFFFFFFFF
    template<class T>
    void Set(::Il2CppString* key, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::PreferenceDictionary::Set");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Set", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___generic__method, key, value);
    }
    // public System.Boolean GetBool(System.String key, System.Boolean fallback)
    // Offset: 0x1753930
    bool GetBool(::Il2CppString* key, bool fallback);
    // public System.Int32 GetInt(System.String key, System.Int32 fallback)
    // Offset: 0x17539C8
    int GetInt(::Il2CppString* key, int fallback);
    // public System.Single GetFloat(System.String key, System.Single fallback)
    // Offset: 0x1753A54
    float GetFloat(::Il2CppString* key, float fallback);
    // public System.String GetString(System.String key, System.String fallback)
    // Offset: 0x1753AE8
    ::Il2CppString* GetString(::Il2CppString* key, ::Il2CppString* fallback);
    // public UnityEngine.Color GetColor(System.String key, UnityEngine.Color fallback)
    // Offset: 0x1753B74
    UnityEngine::Color GetColor(::Il2CppString* key, UnityEngine::Color fallback);
    // public UnityEngine.Material GetMaterial(System.String key, UnityEngine.Material fallback)
    // Offset: 0x1753C2C
    UnityEngine::Material* GetMaterial(::Il2CppString* key, UnityEngine::Material* fallback);
    // public System.Void SetBool(System.String key, System.Boolean value)
    // Offset: 0x1753CB8
    void SetBool(::Il2CppString* key, bool value);
    // public System.Void SetInt(System.String key, System.Int32 value)
    // Offset: 0x1753D74
    void SetInt(::Il2CppString* key, int value);
    // public System.Void SetFloat(System.String key, System.Single value)
    // Offset: 0x1753E30
    void SetFloat(::Il2CppString* key, float value);
    // public System.Void SetString(System.String key, System.String value)
    // Offset: 0x1753EF8
    void SetString(::Il2CppString* key, ::Il2CppString* value);
    // public System.Void SetColor(System.String key, UnityEngine.Color value)
    // Offset: 0x1753FB4
    void SetColor(::Il2CppString* key, UnityEngine::Color value);
    // public System.Void SetMaterial(System.String key, UnityEngine.Material value)
    // Offset: 0x17540AC
    void SetMaterial(::Il2CppString* key, UnityEngine::Material* value);
    // public System.Collections.Generic.Dictionary`2<System.String,System.Boolean> GetBoolDictionary()
    // Offset: 0x1754168
    System::Collections::Generic::Dictionary_2<::Il2CppString*, bool>* GetBoolDictionary();
    // public System.Collections.Generic.Dictionary`2<System.String,System.Int32> GetIntDictionary()
    // Offset: 0x1754170
    System::Collections::Generic::Dictionary_2<::Il2CppString*, int>* GetIntDictionary();
    // public System.Collections.Generic.Dictionary`2<System.String,System.Single> GetFloatDictionary()
    // Offset: 0x1754178
    System::Collections::Generic::Dictionary_2<::Il2CppString*, float>* GetFloatDictionary();
    // public System.Collections.Generic.Dictionary`2<System.String,System.String> GetStringDictionary()
    // Offset: 0x1754180
    System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* GetStringDictionary();
    // public System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color> GetColorDictionary()
    // Offset: 0x1754188
    System::Collections::Generic::Dictionary_2<::Il2CppString*, UnityEngine::Color>* GetColorDictionary();
    // public System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Material> GetMaterialDictionary()
    // Offset: 0x1754190
    System::Collections::Generic::Dictionary_2<::Il2CppString*, UnityEngine::Material*>* GetMaterialDictionary();
    // public System.Void Clear()
    // Offset: 0x1754198
    void Clear();
    // public System.Void .ctor()
    // Offset: 0x1754250
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PreferenceDictionary* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::PreferenceDictionary::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PreferenceDictionary*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.PreferenceDictionary
  #pragma pack(pop)
  static check_size<sizeof(PreferenceDictionary), 160 + sizeof(System::Collections::Generic::List_1<UnityEngine::Material*>*)> __UnityEngine_ProBuilder_PreferenceDictionarySizeCheck;
  static_assert(sizeof(PreferenceDictionary) == 0xA8);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::PreferenceDictionary*, "UnityEngine.ProBuilder", "PreferenceDictionary");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PreferenceDictionary::OnBeforeSerialize
// Il2CppName: OnBeforeSerialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::PreferenceDictionary::*)()>(&UnityEngine::ProBuilder::PreferenceDictionary::OnBeforeSerialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PreferenceDictionary*), "OnBeforeSerialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PreferenceDictionary::OnAfterDeserialize
// Il2CppName: OnAfterDeserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::PreferenceDictionary::*)()>(&UnityEngine::ProBuilder::PreferenceDictionary::OnAfterDeserialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PreferenceDictionary*), "OnAfterDeserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PreferenceDictionary::SetDefaultValues
// Il2CppName: SetDefaultValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::PreferenceDictionary::*)()>(&UnityEngine::ProBuilder::PreferenceDictionary::SetDefaultValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PreferenceDictionary*), "SetDefaultValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PreferenceDictionary::HasKey
// Il2CppName: HasKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::PreferenceDictionary::*)(::Il2CppString*)>(&UnityEngine::ProBuilder::PreferenceDictionary::HasKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PreferenceDictionary*), "HasKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PreferenceDictionary::HasKey
// Il2CppName: HasKey
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PreferenceDictionary::DeleteKey
// Il2CppName: DeleteKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::PreferenceDictionary::*)(::Il2CppString*)>(&UnityEngine::ProBuilder::PreferenceDictionary::DeleteKey)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PreferenceDictionary*), "DeleteKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PreferenceDictionary::Get
// Il2CppName: Get
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PreferenceDictionary::Set
// Il2CppName: Set
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PreferenceDictionary::GetBool
// Il2CppName: GetBool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::PreferenceDictionary::*)(::Il2CppString*, bool)>(&UnityEngine::ProBuilder::PreferenceDictionary::GetBool)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* fallback = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PreferenceDictionary*), "GetBool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, fallback});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PreferenceDictionary::GetInt
// Il2CppName: GetInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::PreferenceDictionary::*)(::Il2CppString*, int)>(&UnityEngine::ProBuilder::PreferenceDictionary::GetInt)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* fallback = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PreferenceDictionary*), "GetInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, fallback});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PreferenceDictionary::GetFloat
// Il2CppName: GetFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ProBuilder::PreferenceDictionary::*)(::Il2CppString*, float)>(&UnityEngine::ProBuilder::PreferenceDictionary::GetFloat)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* fallback = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PreferenceDictionary*), "GetFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, fallback});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PreferenceDictionary::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ProBuilder::PreferenceDictionary::*)(::Il2CppString*, ::Il2CppString*)>(&UnityEngine::ProBuilder::PreferenceDictionary::GetString)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* fallback = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PreferenceDictionary*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, fallback});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PreferenceDictionary::GetColor
// Il2CppName: GetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (UnityEngine::ProBuilder::PreferenceDictionary::*)(::Il2CppString*, UnityEngine::Color)>(&UnityEngine::ProBuilder::PreferenceDictionary::GetColor)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* fallback = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PreferenceDictionary*), "GetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, fallback});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PreferenceDictionary::GetMaterial
// Il2CppName: GetMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material* (UnityEngine::ProBuilder::PreferenceDictionary::*)(::Il2CppString*, UnityEngine::Material*)>(&UnityEngine::ProBuilder::PreferenceDictionary::GetMaterial)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* fallback = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PreferenceDictionary*), "GetMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, fallback});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PreferenceDictionary::SetBool
// Il2CppName: SetBool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::PreferenceDictionary::*)(::Il2CppString*, bool)>(&UnityEngine::ProBuilder::PreferenceDictionary::SetBool)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PreferenceDictionary*), "SetBool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PreferenceDictionary::SetInt
// Il2CppName: SetInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::PreferenceDictionary::*)(::Il2CppString*, int)>(&UnityEngine::ProBuilder::PreferenceDictionary::SetInt)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PreferenceDictionary*), "SetInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PreferenceDictionary::SetFloat
// Il2CppName: SetFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::PreferenceDictionary::*)(::Il2CppString*, float)>(&UnityEngine::ProBuilder::PreferenceDictionary::SetFloat)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PreferenceDictionary*), "SetFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PreferenceDictionary::SetString
// Il2CppName: SetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::PreferenceDictionary::*)(::Il2CppString*, ::Il2CppString*)>(&UnityEngine::ProBuilder::PreferenceDictionary::SetString)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PreferenceDictionary*), "SetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PreferenceDictionary::SetColor
// Il2CppName: SetColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::PreferenceDictionary::*)(::Il2CppString*, UnityEngine::Color)>(&UnityEngine::ProBuilder::PreferenceDictionary::SetColor)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PreferenceDictionary*), "SetColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PreferenceDictionary::SetMaterial
// Il2CppName: SetMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::PreferenceDictionary::*)(::Il2CppString*, UnityEngine::Material*)>(&UnityEngine::ProBuilder::PreferenceDictionary::SetMaterial)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PreferenceDictionary*), "SetMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PreferenceDictionary::GetBoolDictionary
// Il2CppName: GetBoolDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<::Il2CppString*, bool>* (UnityEngine::ProBuilder::PreferenceDictionary::*)()>(&UnityEngine::ProBuilder::PreferenceDictionary::GetBoolDictionary)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PreferenceDictionary*), "GetBoolDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PreferenceDictionary::GetIntDictionary
// Il2CppName: GetIntDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<::Il2CppString*, int>* (UnityEngine::ProBuilder::PreferenceDictionary::*)()>(&UnityEngine::ProBuilder::PreferenceDictionary::GetIntDictionary)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PreferenceDictionary*), "GetIntDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PreferenceDictionary::GetFloatDictionary
// Il2CppName: GetFloatDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<::Il2CppString*, float>* (UnityEngine::ProBuilder::PreferenceDictionary::*)()>(&UnityEngine::ProBuilder::PreferenceDictionary::GetFloatDictionary)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PreferenceDictionary*), "GetFloatDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PreferenceDictionary::GetStringDictionary
// Il2CppName: GetStringDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* (UnityEngine::ProBuilder::PreferenceDictionary::*)()>(&UnityEngine::ProBuilder::PreferenceDictionary::GetStringDictionary)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PreferenceDictionary*), "GetStringDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PreferenceDictionary::GetColorDictionary
// Il2CppName: GetColorDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<::Il2CppString*, UnityEngine::Color>* (UnityEngine::ProBuilder::PreferenceDictionary::*)()>(&UnityEngine::ProBuilder::PreferenceDictionary::GetColorDictionary)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PreferenceDictionary*), "GetColorDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PreferenceDictionary::GetMaterialDictionary
// Il2CppName: GetMaterialDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<::Il2CppString*, UnityEngine::Material*>* (UnityEngine::ProBuilder::PreferenceDictionary::*)()>(&UnityEngine::ProBuilder::PreferenceDictionary::GetMaterialDictionary)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PreferenceDictionary*), "GetMaterialDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PreferenceDictionary::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::PreferenceDictionary::*)()>(&UnityEngine::ProBuilder::PreferenceDictionary::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::PreferenceDictionary*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::PreferenceDictionary::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
